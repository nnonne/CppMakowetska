#include <iostream>
#include <cmath>

double * ReverseArray(int n){
    double * mas = new double[n];
    return mas;
}
void FreeArray(double * mas){
    delete[] mas;
}
int amount(double * mas){
    int i = 0;
    while (mas[i] != 0){
        i ++;
    }
    return i;
}
int EnterArray(double * mas){
    int i = 0;
    mas[0] =  1;
    mas[1] = 1;
    while (mas[i-1] != 0){
        std :: cout << "mas[" << i << "] = ";
        std :: cin >> mas[i];
        i++;
        mas[i] = 1;
    }
    return i;
}
void PrintArray(double * mas){
    int n = amount(mas);
    for (int i = 0; i < n; i++){
        std :: cout << "\t" << mas[i] << std :: endl;
    }
}
double SquaresArray(double *mas){
    int n = amount(mas);
    int am = 0;
    for (int i = 0; i < n; i++){
        int tmp = int(sqrt(mas[i]));
        if (tmp*tmp == mas[i]){
            am ++;
        }
    }
    return am;
}
double CubesArray(double *mas){
    int n = amount(mas);
    int am = 0;
    for (int i = 0; i < n; i++){
        int tmp = int(cbrt(mas[i]));
        if (tmp*tmp == mas[i]){
            am ++;
        }
    }
    return am;
}

int main(){

    double *mas = ReverseArray(2048);
    EnterArray(mas);
    PrintArray(mas);
    int s = SquaresArray(mas);
    int t = CubesArray(mas);
    std :: cout << "cubes  = " << t << std :: endl;
    std :: cout << "squares  = " << s;
    FreeArray(mas);
}
