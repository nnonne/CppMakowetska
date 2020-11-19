#include <stdio.h>

void ent(int n, double* arr){
    for (int i = 0; i<n; i++){
        printf("\narr[%d] = ",i);
        scanf("%lf",&arr[i]);
    }
}
void prnt(int n,const double* arr){
    for (int i = 0; i < n; i++){
        printf("arr[%d] = %lf ",i,arr[i]);
    }
    printf("\n");
}
void suma(int n,const double* arr1, const double* arr2,double* a){
    for (int i = 0; i < n; i++){
        a[i] = arr1[i] + arr2[i];
    }

}
double prod(int n,const double* arr1, const double* arr2){
    double pr = 0;
    for (int i = 0; i < n; i++){
        pr += arr1[i] * arr2[i];
    }
    return pr;
}
int main(){
    const size_t size = 5;
    double arr1[size],arr2[size],arr3[size];
    printf("enter array 1: \n");
    ent(size, arr1);
    prnt(size,arr1);
    printf("enter array 2: \n");
    ent(size, arr2);
    prnt(size,arr2);
    suma(size,arr1,arr2,arr3);
    printf("suma: ");
    prnt(size,arr3);
    double dob = prod(size,arr1,arr2);
    printf("prod = %lf",dob);

}
