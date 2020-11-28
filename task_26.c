#include <stdio.h>
#include <string.h>

int main(){
    char t[100] = "76543210123";
    char a[100];
    int amount = -1, count = 0;
    for(int i = 1; i < strlen(t); ++i ){
        int k = i-1;
        count = 0;
        if (t[i] - t[i+1] == -1){
            while(t[k] - t[k+1] == -1){
                count +=1;
                k ++;
            }
        }
        if (t[i] - t[i+1] == 1){
            k = i-1;
            while(t[k] - t[k+1] == 1 ){
                count ++;
                k ++;
            }
        }
        if (count > amount){
            amount = count+1;
            char a[count+1];
            for (int j = 0; j < count+1; j++){
                a[j] = t[i+j-1];
            }
            a[count+1] ='\0';
            printf("%s\n",a);
        }
    }
    a[count] = 0;
}

