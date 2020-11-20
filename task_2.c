#include <stdio.h>

#define N 3
#define M 3

void print(float matrix[N][M]){
    int i,j;
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            printf("%f ",matrix[i][j]);
    }
    printf("\n");
}
}
void t(float matr1[N][M], float matr2[N][M]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            matr2[j][i] = matr1[i][j];
        }
    }
}
int main(){
    float matr[N][N] = {{1.0,2,3},{4,5,6},{7,8,9}};
    float transp[N][M];
    int I,J;
    float a;
    printf("I = ");
    scanf("%d",&I);
    printf("J = ");
    scanf("%d",&J);
    printf("A = ");
    scanf("%f",&a);
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if ( ( i == I) && (j == J)){
                matr[i][j] = a;
            }
        }
    }
    t(matr,transp);
    print(transp);

}
