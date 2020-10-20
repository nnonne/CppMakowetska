#include <stdio.h>

int main(){
    double eps = 1;
    int count = 0;
    while (!((eps + 1) == 1)){
        eps/=2;
        count++;
    }
    printf("%lf, %d iter",eps,count);
    printf("5");

    return 0;
}
