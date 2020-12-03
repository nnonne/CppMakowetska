#include <stdio.h>
#include <stdlib.h>

int input(int * arr, size_t n, char * fname){
    FILE* fp = fopen(fname, "wb");
    if (fp == NULL){
        printf("error\n");
        return -1;
    }
    fwrite(arr,n,sizeof(arr[0]),fp);
    fclose(fp);
    return EXIT_SUCCESS;
}
int output(const char * fname){
    FILE* fp = fopen(fname, "rb");
    if (fp == NULL){
        printf("error\n");
        return -1;
    }
    char res;
    while (!feof(fp)){
        int item;
        res = fread(&item,1,sizeof(item),fp);
        if (res == 0) break;
        printf("%d\n",item);
    }
    fclose(fp);
    return EXIT_SUCCESS;
}
int append(const int * arr,size_t n, const char * fname){
    FILE* fp = fopen(fname, "ab");
    if (fp == NULL){
        printf("error\n");
        return -1;
    }
    for (size_t i = 0; i < n; i++){
        fwrite(&arr[i],1,sizeof(arr[i]),fp);
    }
    fclose(fp);
    return EXIT_SUCCESS;
}
int del_el(const char * fname,int el){
    FILE* fp = fopen(fname, "ab");
    if (fp == NULL){
        printf("error\n");
        return -1;
    }
    int n = 0;
    while (!feof(fp)){
         n++;
    }
    char ar[n];
    char res;
    int i = 0;
    while (!feof(fp)){
        int item;
        res = fread(&item,1,sizeof(item),fp);
        if ((int)res != el){
            ar[i] = res;
            i++;
        }
    }
    for (size_t i = 0; i < n; i++){
        fwrite(&ar[i],1,sizeof(ar[i]),fp);
    }
    fclose(fp);
    return EXIT_SUCCESS;
}
int in_m(const char * fname,int el){
    FILE* fp = fopen(fname, "rb");
    if (fp == NULL){
        printf("error\n");
        return -1;
    }
    char res;
    while (!feof(fp)){
        int item;
        res = fread(&item,1,sizeof(item),fp);
        if (res != el){
            printf("1");
            fclose(fp);
            return EXIT_SUCCESS;
        }
    }
    printf("0");
    fclose(fp);
    return EXIT_SUCCESS;
}
int isempty(const char * fname){
    FILE* fp = fopen(fname, "ab");
    if (fp == NULL){
        printf("error\n");
        return -1;
    }
    int n = 0;
    while (!feof(fp)){
        n++;
    }
    if (n == 0) return 1;
    else return 0;
    fclose(fp);
}
int main(){
    char fname[10] = "myfile";

    int n;
    printf(" n = ");
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; ++i){
        printf("ar[%d] = ",i);
        scanf("%d",&ar[i]);
    }
    input(ar,n,fname);
    append(ar,n,fname);
    int a;
    printf(" input the element you want to check: ");
    scanf("%d",&a);
    //del_el(fname,a);
    in_m(fname,a);
    //output(fname);
    printf("is empty : %d", isempty(fname));
}

