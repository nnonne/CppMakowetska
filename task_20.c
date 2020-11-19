#include <stdio.h>
int main(){
    int m = (1 << 24) + (2 << 16) + (3 << 8) + 4;
    int a1 = m & 0xFF;
    int a2 = (m & 0xFF00) >> 8;
    if ((a1 == 4) && (a2 == 3)){
        printf("little");
    }
    else if ((a1 == 4) && (a2 == 2)){
        printf("little");
    }
    else if (a1 == 1){
        printf("big");
    }
    else{
        printf("unknown");
    }
}



