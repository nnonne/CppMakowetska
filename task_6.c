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
int evenodd(const char * fname){
    FILE* fp = fopen(fname, "rb");
    if (fp == NULL){
        printf("error\n");
        return -1;
    }
    char res;
    const char * ev = "G";
    const char * odd = "H";
    FILE* fp1 = fopen(ev, "wb");
    if (fp1 == NULL){
        printf("error\n");
        return -1;
    }
    FILE* fp2 = fopen(odd, "wb");
    if (fp2 == NULL){
        printf("error\n");
        return -1;
    }
    while (!feof(fp)){
        int item;
        res = fread(&item,1,sizeof(item),fp);
        if (res < sizeof(item)) break;
        if (item % 2 == 0) fwrite(&item,1,sizeof(item),fp1);
        else fwrite(&item,1,sizeof(item),fp2);
    }
    fclose(fp);
    fclose(fp1);
    printf("even numbers: \n");
    output(ev);
    printf("odd numbers: \n");
    fclose(fp2);
    output(odd);
    return EXIT_SUCCESS;
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
    evenodd(fname);
}

