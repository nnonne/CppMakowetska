#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define N 100
int main(){
    char mas[N];
    char * fname = "myfile";
    FILE *fp;
    char c;
    int k = 0;

    fp = fopen(fname,"rt");
    while (!feof(fp)){
        c = fgetc(fp);
        mas[k] = (char) c;
        k++;
    }
    for (int i = 0; i < k-1; ++i){
        printf("%c",mas[i]);
    }
    printf("\n");
    fclose(fp);
    FILE *fp1;
    char fname2[20];
    strcpy(fname2,fname);
    strcat(fname2,(char*)"_backwards.txt");
    printf("f = %s",fname2);
    fp1 = fopen(fname2,"wt");
    for (int i = k-2; i >= 0; i--){
        fprintf(fp,"%c",mas[i]);
    }
    fclose(fp1);
}


