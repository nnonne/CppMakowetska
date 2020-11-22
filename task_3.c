#include <stdio.h>
#include <stdlib.h>

typedef struct MyStack{
    int data;
    struct MyStack *ptr;
}MyStack;
int is2(int x){
    int st = 1;
    while (st < x){
        st *= 2;
    }
    if (st == x){
        return 1;
    }
    else return 0;
}
int is3(int x){
    int st = 1;
    while (st < x){
        st *= 3;
    }
    if (st == x){
        return 1;
    }
    else return 0;
}
int main(){
    int x;
    MyStack* p = NULL;
    MyStack* z;
    int c2 = 0, c3 = 0;
    do{
        scanf("%d",&x);
        if (is2(x)) c2 ++;
        if (is3(x)) c3 ++;
        z = (MyStack*) malloc(sizeof(MyStack));
        z -> data = x;
        z -> ptr = p;
        p = z;
    }while(x != 0);
    printf("you have entered: \n");
    while(p){
        z = p;
        printf("%d ", p -> data);
        p = p -> ptr;
        free(z);
    }
    printf(" c2 = %d, c3 = %d", c2,c3);

}
