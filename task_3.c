#include <stdio.h>
#include <string.h>

int main(){
    char a[100] = "some text, (text in) ";
    char b[100];
    int k = 0, i = 0;
    int state = 0;
    while (i < strlen(a)){
        if (a[i] == '('){
            if (state == 0) state == 1;
            else{
                printf("wrong string");
                return 1;
            }
        }
        if (a[i] == ')'){
            if (state == 1) {
                state == 0;
            }
        }
        i++;
    }
    if (state == 1){
        printf("wrong string");
        return 3;
    }
    for(int i = 0; i < strlen(a); ++i ){
        if (a[i] == '(') state = 1;
        if (a[i] == ')'){
           state = 0;
           continue;
        }
        if (state == 0) b[k++] = a[i];
    }
    b[k++] = 0;
    printf("%s",b);
}

