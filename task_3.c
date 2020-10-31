#include <stdio.h>
int main(){
    unsigned long long m;
    unsigned j;
    printf("input m: \n m = ");
    scanf("%Lu", &m);
    printf("input j: \n j = ");
    scanf("%u", &j);
    m = m & ~(1 << j);
    printf("m = %Lo %Lx", m,m);
}




