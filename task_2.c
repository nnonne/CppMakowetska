#include <stdio.h>
#include <ctype.h>

int main(){
    char * fname = "myfile";
    FILE *fp;
    char c;
    int isdig = 1;
    int mydig;
    fp = fopen(fname,"rt");
    for (int i = 0; i < 2; i++){
        c = fgetc(fp);
        if (!isdigit(c)){
            isdig = 0;
            //break;
        }
    }
    if (isdig){
        if (c % 2  == 0) printf("digit is even");
        else printf("digit is odd");
    }
    else printf("it is not a digit with two ciphers");
    fclose(fp);

}


