#include <stdio.h>

#define N 5

typedef struct Employee{
    char role;
    char name;
    char surname;
    char sex;
    int day;
    int month;
    int year;
}Employee;
int input(Employee * x){
    printf("role: ");
    scanf(" %c",&x -> role);
    printf("name: ");
    scanf(" %c",&x -> name);
    printf("surname: ");
    scanf(" %c",&x -> surname);
    printf("sex: ");
    scanf(" %c",&x -> sex);
    printf("date of birth\nday: ");
    scanf(" %d",&x -> day);
    printf("month: ");
    scanf(" %d", &x -> month);
    printf("year: ");
    scanf(" %d", &x -> year);
    return 0;
}
void output(Employee  x){
    printf(" Profile: \n Role: %c \n Name: %c \n Surname: %c \n Sex: %c \n Date of birth: %2d.%2d.%4d\n",x.role,x.name,x.surname,x.sex,x.day,x.month,x.year);
}
char findrole(Employee ** x){
    char ans;
    int n = 0;
    for (int i = 0; i < N; i++){
        Employee * res1 = x[i];
        int count = 0;
        for (int j = 0; j < N; j++ ){
            Employee * res2 = x[j];
            if (res1 ->role == res2 -> role){
                count ++;
            }
        }
        if (count > n){
            n = count;
            ans = res1 ->role;
        }
    }

    return ans;
}
void findnames(Employee ** x){
    for (int i = 0; i < N; i++){
        Employee * res1 = x[i];
        printf(" employees with name %c:",res1->name);
            output(*res1);
        for (int j = 0; j < N; j++ ){
            Employee * res2 = x[j];
            if (res1 ->name == res2 -> name){
                output(*x[j]);
            }
        }
    }
}

int main(){
    Employee ** profiles[N];
    for (int i = 0; i < N; i++){
        Employee y;
        input(&y);
        output(y);
    }
    //char a = findrole(profiles[N]);
    //printf("%c",a);
    findnames(profiles[N]);
}

