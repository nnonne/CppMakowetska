#include <stdio.h>

int main(){
    int n,m,k;
    printf("n = ");
    scanf("%d",&n);
    printf("m = ");
    scanf("%d",&m);
    printf("k = ");
    scanf("%d",&k);
    float matr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("matrix(%d,%d) = ",i,j);
            scanf("%f",&matr[i][j]);
        }
    }
    float ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i - j == k){
                ans += matr[i][j];
            }
        }
    }
    printf("sum of elements = %f", ans);
}

