#include <stdio.h>

typedef struct Ratio{
    int num;
    unsigned int denum;
}Ratio;

int input(Ratio * x){
    scanf(" %d",&x -> num);
    scanf(" %u", &x -> denum);
    return 0;
}
void output(const Ratio x){
    printf("R = %d / %u \n",x.num,x.denum);
}
unsigned gcd(unsigned a,unsigned b){
    if (a == 0) return b;
    if (b == 0) return a;
    if (a > b) return gcd(b,a%b);
    else return gcd(a,b%a);
}
Ratio reduce(Ratio x){
    Ratio z;
    unsigned d = gcd(x.num, x.denum);
    z.num = x.num / d;
    z.denum = x.denum / d;
    return z;
}
Ratio add(Ratio a, Ratio b){
    Ratio c;
    c.num = (int)(a.num * b.denum + b.num * a.denum);
    c.denum  = a.denum * b.denum;
    return reduce(c);
}
Ratio division(Ratio a, Ratio b){
    Ratio c;
    c.num = (int)(a.num * b.num);
    c.denum  = a.denum * b.denum;
    return reduce(c);
}


int main(){
    Ratio x,y,z;
    input(&x);
    //output(x);
    input(&y);
    //output(y);
    z = add(x,y);
    output(z);
    z = division(x,y);
    output(z);
}



