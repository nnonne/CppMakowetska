#include <stdio.h>
#include <stdlib.h>
typedef struct Baggage{
    int  num;
    int amount;
    float weight;
} Baggage;

int input(Baggage * t){
    printf("input number: ");
    scanf("%d",&(t -> num));
    printf("input the amount of baggage: ");
    scanf("%d",&(t -> amount));
    printf("input the weight of baggage: ");
    scanf("%f",&(t -> weight));
    return 0;
}
void output(Baggage b){
    printf( " passenger with number %d has %d baggages that weights %f \n",b.num,b.amount, b.weight);
}
void find_bag(const char * filename2){
    FILE * f2 = fopen(filename2,"rb");
    float w = 0;
    int a = 0;
    while( !feof(f2) ){
        Baggage t;
        char b = fread(&t,1,sizeof(t),f2);
        w += t.weight;
        a += t.amount;
    }
    while( !feof(f2) ){
        Baggage t;
        char b = fread(&t,1,sizeof(t),f2);
        if (abs(t.weight / t.amount - w/a) <= 1 ) output(t);
    }
    fclose(f2);
}
void more_than_two(const char * filename2){
    FILE * f2 = fopen(filename2,"rb");
    while( !feof(f2) ){
        Baggage t;
        char b = fread(&t,1,sizeof(t),f2);
        if (t.amount > 2 ) output(t);
    }
    fclose(f2);
}
void more_than_middle(const char * filename2){
    FILE * f2 = fopen(filename2,"rb");
    int a = 0,c = 0;
    while( !feof(f2) ){
        Baggage t;
        char b = fread(&t,1,sizeof(t),f2);
        c += 1;
        a += t.amount;
    }
    while( !feof(f2) ){
        Baggage t;
        char b = fread(&t,1,sizeof(t),f2);
        if (t.amount > a/c ) output(t);
    }
    fclose(f2);
}
int main(){
    find_bag("bags");
    printf("\n");
    more_than_two("bags");
    printf("\n");
    more_than_middle("bags");
}
