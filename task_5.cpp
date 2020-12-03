#include <iostream>

double * ReverseArray(const int m){
    double * mas;
    mas = new double[m*m];
    return mas;
}

void FreeArray(double * mas){
    delete[] mas;
}
void EnterArray(double* mas, int m){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
        std :: cout << "mas[" << i << "][" << j << "] = ";
        std :: cin >> mas[m * i + j];
        }
    }
}
void PrintArray(const double * mas, int m){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
        std :: cout << mas[m * i + j] << std :: endl;
        }
        std :: cout << std :: endl;
    }
}
double * power(double *  m1,double * m2,double * m3,int n){
    for(int i  = 0 ; i < n ; i++){
        for(int j = 0 ; j < n; j++){
            m3[n * i + j]=0;
            for(int k = 0 ; k < n ; k ++){
                m3[n * i + j] += m1[n * i + k]* m2[k * n + j];
            }

        }
    }
    return m3;
}


int main(){
    int n,m;
    std :: cout << " n = ";
    std :: cin >> n;
    std :: cout << " enter the size of matrix:  ";
    std :: cin >> m;
    double *mas1 = ReverseArray(m);
    EnterArray(mas1,m);
    double *mas2 = ReverseArray(m);
    EnterArray(mas2,m);
    double *mas3 = ReverseArray(m);
    if (m == 2){
        mas3 = power(mas1,mas2,mas3,m);
        PrintArray(mas3,m);
    }
    else {
        std :: cout << "can`t make this division" << std :: endl;
    }

    FreeArray(mas1);
    FreeArray(mas2);
    FreeArray(mas3);
}

