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
    while (!feof(fp)){
        int item;
        char res = fread(&item,1,sizeof(item),fp);
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

int main(){
    char fname[10] = "myfile";
    int ar[10];
    int n;
    printf(" n = ");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i){
        printf("ar[%d] = ",i);
       scanf("%d",&ar[i]);
    }
    input(ar,n,fname);
    append(ar,n,fname);
    output(fname);
}
