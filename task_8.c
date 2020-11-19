#include <stdio.h>

void ent(double* arr){
    int i = 1;
    printf("\narr[0] = ");
        scanf("%lf",&arr[0]);
    while (i < 20 && arr[i-1] != 0){
        printf("\narr[%d] = ",i);
        scanf("%lf",&arr[i]);
        i++;
    }
}
void prnt(const double* arr){
    int i = 0;
    while (arr[i] != 0){
        printf("arr[%d] = %lf ",i,arr[i]);
        i ++;
    }
    printf("\n");
}
int amount(const double* arr){
    int i = 0;
    while (arr[i] != 0){
        i ++;
    }
    return i;
}
double harmonic(const double* arr){
    int n = amount(arr);
    double s = 0;
    for (int i = 0; i < n; i++){
        s += 1 / arr[i];
    }
    float ans = n/s;
    return ans;
}
double prod(const double* arr){
    int n = amount(arr);
    double pr = 1;
    for (int i = 0; i < n; i++){
        pr *= arr[i];
    }
    return pr;
}
int main(){

    double arr[20];
    printf("enter array: \n");
    ent(arr);
    prnt(arr);
    double dob = prod(arr);
    printf("prod = %lf\n",dob);
    double harm = harmonic(arr);
    printf("harmonic = %lf\n",harm);

}
