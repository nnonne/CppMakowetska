#include <stdio.h>

#define N 3
#define M 3
int input(int matrix[N][M]){
    int i,j;
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            printf("matrix(%d,%d) = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    return 0;
}
void print(int matrix[N][M]){
    int i,j;
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            printf("%d",matrix[i][j]);
    }
    printf("\n");
}
}
void t(int matr1[N][M], int matr2[N][M]){
    int i,j;
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            matr2[j][i] = matr1[i][j];
        }
    }
}
int main(){
    int matr[N][N];
    int transp[N][M];
    int i,j,n,m;
    printf("m = ");
    scanf("%d",&m);
    printf("n = ");
    scanf("%d",&n);
    input(matr);
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            if (matr[i][j] == m){
                matr[i][j] = n;
            }
        }
    }
    t(matr,transp);
    print(transp);

}
