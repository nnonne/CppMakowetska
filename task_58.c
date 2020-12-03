#include <stdio.h>

typedef struct Date{
    int day;
    int month;
    int year;
}Date;

int input(Date * x){
    scanf(" %d",&x -> day);
    scanf(" %d", &x -> month);
    scanf(" %d", &x -> year);
    return 0;
}
void output(const Date x){
    printf("Date = %2d.%2d.%4d\n",x.day,x.month,x.year);
}
Date yesterday(const Date x){
    int dayMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    Date res = x;
    if (x.day > 1){
        res.day  = x.day - 1;
        return res;
    }
    if(x.month > 1){
        res.month --;
        res.day = dayMonth[res.month - 1];
        return res;
    }
    if (x.month == 1){
        res.year --;
        res.month = 12;
        res.day = dayMonth[res.month - 1];
        return res;
    }
}

int main(){
    Date x,y,z;
    input(&x);
    output(x);
    y = yesterday(x);
    output(y);

}



