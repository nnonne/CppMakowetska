#include <iostream>

double * ReverseArray(const int m){
    double * mas = new double[m];
    return mas;
}
void FreeArray(double * mas){
    delete[] mas;
}
void EnterArray(double* mas, int m,int n){
    if (n == 2) n = 1;
    for (int k = 0; k < n; k++){
        for (int i = 0; i < m; i++){
            for (int j = 0; j < m; j++){
            std :: cout << "mas[" << i << "][" << j << "] = ";
            std :: cin >> mas[m * i + j];
            }
        }
    }
}
void PrintArray(const double * mas, int m,int n){
    if (n == 2) n = 1;
    for (int k = 0; k < n; k++){
        for (int i = 0; i < m; i++){
            for (int j = 0; j < m; j++){
            std :: cout << mas[m * i + j] << " ";
            }
            std :: cout << std :: endl;
        }
    }
}
double * power(double *  m1,double * m2,double * m3,int m){
    for(int i  = 0 ; i < m ; i++){
        for(int j = 0 ; j < m; j++){
            m3[m * i + j] = 0;
            for(int k = 0 ; k < m ; k ++){
                m3[m * i + j] += m1[m * i + k]* m2[k * m + j];
            }
        }
    }
    return m3;
}
int main(){
    int l,m,n;
    std :: cout << " enter amount of matrixes:  ";
    std :: cin >> l;
    std :: cout << " rozmirnist' n  =  ";
    std :: cin >> n;
    std :: cout << " enter the size of matrixes:  ";
    std :: cin >> m;
    double * mas = ReverseArray(l);
    double * matr;
    if (n ==2) matr = ReverseArray(m*m);
    else matr = ReverseArray(n*m*m);
    EnterArray(matr,m,n);
    mas[0] = * matr;
    double * prod = {0};
    if (n == 2) {
        prod =  matr;
    }
    double * m1;
    for (int i = 1; i < l; i++){
        if (n == 2) m1 =  ReverseArray(m*m);
        else m1 =  ReverseArray(n*m*m);
        EnterArray(m1,m,n);
        double * mas[i] = {m1};
        if (n == 2){
        double * prod1 = prod;
        std :: cout << prod1[0] << "\n";
        power(prod1,m1,prod,m);
        }
    }
    if (n == 2) PrintArray(prod,m,n);
    else std :: cout << "can't divide it";
    FreeArray(mas);
    FreeArray(prod);
}

