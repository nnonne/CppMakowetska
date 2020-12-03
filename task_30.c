#include <stdio.h>

int main(){
    int fk0=0, fk1=1, n, fkn;
    scanf("%d",&n);
    for (int i = 2;i<=n;i++){
        fkn = fk0 + fk1;
        fk0 = fk1;
        fk1 = fkn;
    }
    printf("%d",fkn);


    return 0;
}


