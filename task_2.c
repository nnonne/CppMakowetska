#include <stdio.h>
#include <stdbool.h>
typedef
struct Field{
    char col;
    int row;
}Field;

int input(Field * x){
    Field  res;
    int r;
    printf(" column = ");
    scanf(" %c",&x -> col);
    printf(" row = ");
    scanf(" %d",&x -> row);
    //res.row = r;
    //*x = res;
    return 0;
}
void output(const Field x){
    printf("%C : %u \n",x.col,x.row);
}
bool check(Field x, Field y){
    if (x.col == y.col) return true;
    if (x.row == y.row) return true;
    if (x.col - y.col == x.row - y.row ) return true;
    return false;
}

int main(){
   Field x;
   Field y;
   input(&x);
   output(x);
   input(&y);
   output(y);
   if (check(x,y)) printf("correct");
   else printf("uncorrect");
}

