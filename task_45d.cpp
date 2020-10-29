#include <iostream>

int main(){
    double x;
    double eps = 0.00001;
    std :: cout << "input x" << std :: endl;
    std :: cin >> x;
    int i = 1;
    double expp = 0,addent = 1;
    while (addent >= eps){
        addent *= x/i;
        i++;
        std :: cout << addent << std :: endl;
        expp += addent;
    }
    std :: cout << expp << std :: endl;

}
