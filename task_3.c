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
    char *fname3 = "myfile3";
    FILE *fp3 = fopen(fname3,"wt");
    if (fp2 == NULL || fp2 == NULL || fp2 == NULL){
        printf("can't open file");
        return -1;
    }
    char c;
    int k1 = 0, k2 = 0 ;
    char mas1[N],  mas2[N];
    while (!feof(fp1)){
        c = fgetc(fp1);
        mas1[k1] = (char) c;
        k1++;
    }
    while (!feof(fp2)){
        c = fgetc(fp2);
        mas2[k2] = (char) c;
        k2++;
    }
    fclose(fp1);
    fclose(fp2);
    for (int i = 0; i < k1-1; ++i){
        fprintf(fp3,"%c",mas1[i]);

    }
    fprintf(fp3,"%c",'\n');
    for (int i = 0; i < k2-1; ++i){
        fprintf(fp3,"%c",mas2[i]);

    }
    fclose(fp3);
}

