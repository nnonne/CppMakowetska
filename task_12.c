#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char t[100] = "! * . ..*.. ** ";
    char a[100];
    int k = 0;
    for(int i = 0; i < strlen(t); i++ ){
        if (t[i] == '!' ){
            a[k] = '.';
            k ++;
        }
        else if (t[i] == '.' ){
           a[k] = '.';
           a[k + 1] = '.';
           a[k + 2] = '.';
           k += 3;
        }
        else if  (t[i] == '*'){
            a[k] = '+';
            k ++;
        }
        else{
        a[k] = t[i];
        k++;
        }
    }
    a[k] = 0;
    printf("\n");
    for (int i = 0; i < strlen(a); i++){
        printf("%c",a[i]);
    }
}


