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


int main(){
    int n;
    std :: cout << " n = ";
    std :: cin >> n;
    double *mas1 = ReverseArray(n);
    EnterArray(mas1,n);
    double *mas2 = ReverseArray(n);
    EnterArray(mas2,n);
    double *mas3 = ReverseArray(n);
    if (n == 3){
        mas3[0] = mas1[1]*mas2[2] - mas1[2]*mas2[1];
        mas3[1] = mas1[2]*mas2[0] - mas1[0]*mas2[2];
        mas3[2] = mas1[0]*mas2[1] - mas1[1]*mas2[0];
        std :: cout << "third vector is " << std :: endl;
        PrintArray(mas3,3);
    }
    else {
        std :: cout << "can`t make this division" << std :: endl;
    }

    FreeArray(mas1);
    FreeArray(mas2);
    FreeArray(mas3);
}

