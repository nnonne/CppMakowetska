#include <iostream>
int main(){
    double zero = 0.5;
    int k = 0;
    while ( (1+zero > 1)){
        zero /= 2;
        k ++;
    }

    //std :: cout << k << std :: endl;
    std :: cout << zero;
}
