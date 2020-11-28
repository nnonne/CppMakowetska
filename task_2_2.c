#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char t[100] = "some text,ph, +++,     5 - cb +2ph   ";
    int i = 0, ans = -1;
    for(i; i < strlen(t); i++ ){
        if (t[i] == ',') {
            ans = i;
        }
    }
    printf("%d",ans);
}


