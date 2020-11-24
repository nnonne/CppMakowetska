#include <iostream>

double * ReverseArray(const int m){
    double * mas = new double[m];
    return mas;
}
void PrintArray(const double * mas, int n,int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        std :: cout << mas[n * i + j] << " ";
        }
    std :: cout << std :: endl;
    }
}

int main(){
    int n,m, J;
    std :: cout << " amount of rows:  ";
    std :: cin >> n;
    std :: cout << " amount of columns:  ";
    std :: cin >> m;
    std :: cout << " the number of your column(zero is first):  ";
    std :: cin >> J;
    double * mas = ReverseArray(n*m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (j == J){
                std :: cout << "matrix[" << i << "][" << j <<"] = ";
                std :: cin >> mas[n * i + j];
            }
            else mas[n * i + j] = rand();
        }
    }
    PrintArray(mas,n,m);
    free(mas);
}

