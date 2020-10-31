#include <stdio.h>
int main(){
    unsigned char n;
    unsigned long long m;
    printf("input n: \n n = ");
    scanf("%u", &n);
    m = 1L << n;
    printf("m = %Lu", m);
}

