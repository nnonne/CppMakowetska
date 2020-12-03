#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ten2base(int n,int b, char * w){
    char digs[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    int i = 0;
    int m = n;
    while (m){
        int d = m % b;
        w[i] = digs[d];
        m /= b;
        i++;
    }
    w[i] = '\0';
    char ans[strlen(w)];
    for (int j = 0; j <= i ; j++){
        ans[strlen(w)-j-1] = w[j];
    }
    printf("%s \n",ans);
    return 0;
}
int main(){
    int n,i,b;
    char word[100];
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter your base: ");
    scanf("%d",&b);
    if (b <= 1 || b > 16) printf ("error");
    else{
        for (int i = 1; i <= n; ++i){
            ten2base(i,b,word);
        }
    }
}
