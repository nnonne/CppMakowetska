#include <iostream>

double * ReverseArray(int n){
    double * mas = new double[n];
    return mas;
}

void FreeArray(double *mas){
    delete[] mas;
}
void EnterArray(double* mas, int n){
    for (int i = 0; i < n; i++){
        std :: cout << "mas[" << i << "] = ";
        std :: cin >> mas[i];
    }
}
void PrintArray(const double *mas, int n){
    for (int i = 0; i < n; i++){
        std :: cout << "\t" << mas[i] << std :: endl;
    }
}
double PowArray(const double *mas, int n){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += mas[i] * mas[i];
    }
    return sum;
}

int main(){
    int n;
    std :: cout << " n = ";
    std :: cin >> n;
    double *mas = ReverseArray(n);
    EnterArray(mas,n);
    PrintArray(mas,n);
    double s = PowArray(mas,n);
    std :: cout << "s = " << s;
    FreeArray(mas);
}

