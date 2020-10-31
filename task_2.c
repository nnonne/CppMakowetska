#include <stdio.h>
int main(){
    unsigned  n;
    unsigned k;
    printf("input n: \n n = ");
    scanf("%u", &n);
    printf("input k: \n k = ");
    scanf("%u", &k);
    n = n | (1 << k);
    printf("%u", n);
}


