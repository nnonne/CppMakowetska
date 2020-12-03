#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char t[100] = "some text,ph, +++,   5 - cb +2ph   ";
    char a[100];
    int k = 0;
    for(int i = 0; i < strlen(t); i++ ){
        if (!(t[i] == 'c' && t[i+1] == 'b')){
        a[k] = t[i+1];
        k++;
        }
    }
    a[k] = 0;
    printf("\n");
    for (int i = 0; i < strlen(a); i++){
        printf("%c",a[i]);
    }
}


