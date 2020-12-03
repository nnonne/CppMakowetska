#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define N 100

int main(){
    char * fname1 = "myfile1";
    char * fname2 = "myfile2";
    FILE *fp1 = fopen(fname1,"rt");
    FILE *fp2 = fopen(fname2,"rt");
    char *fname = "myfile3";
    FILE *fp3 = fopen(fname,"wt");
    if (fp2 == NULL || fp2 == NULL || fp2 == NULL){
        printf("can't open file");
        return -1;
    }
    char buf1[N], buf2[N], buf3[N];
    char fm1[N][N], fm2[N][N];
    int fend = 0, k1 = 0, k2 = 1;
    while(1){
        if (feof(fp1)){
            if (fend == 2) break;
            fend = 1;
        }
        else {
            fgets(buf1,N,fp1);
            strcpy(fm1[k1],buf1);
            k1++;
        }
        if (feof(fp2)){
            if (fend == 1) break;
            fend = 2;
        }
        else {
            fgets(buf2,N,fp2);
            strcpy(fm2[k2],buf2);
            k2++;
        }
    }
    fclose(fp1);
    fclose(fp2);
    int k3 = k2 > k1 ? k2 : k1;
    for (int i = 0; i < k3;++i){
        int i1 = i % k1;
        int i2 = i % k2;
        strcpy(buf3,fm1[i1]);
        strcat(buf3,fm2[i2]);
        fputs(buf3,fp3);
    }
    fclose(fp3);
}


