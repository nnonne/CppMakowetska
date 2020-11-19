#include <stdio.h>

int main(){
    int i = 1;
    double suma = 0,elem;
    do{
        printf("a[%d] = ",i);
        scanf("%lf",&elem);
        suma += elem;
        i++;
    } while (elem != 0);
    printf("%lf ",suma);
    return 0;

}



