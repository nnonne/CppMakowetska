#include <stdio.h>

int main(){
    int n,m;
    printf("n = ");
    scanf("%d",&n);
    printf("m = ");
    scanf("%d",&m);
    float matr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("matrix(%d,%d) = ",i,j);
            scanf("%f",&matr[i][j]);
        }
    }
    printf("your matrix:\n")
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%f ",matr[i][j]);
    }
    printf("\n");
}
}
