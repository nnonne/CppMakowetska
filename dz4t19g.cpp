#include <iostream>

int main(){
    int k;
    float x,xk = 1;
    std::cout << " k = " ;
    std::cin >> k;
    std::cout << " x = " ;
    std::cin >> x;
    for (int i = 1; i <= 2*k; i ++){
        xk *= ((-1)*x)/i;
    }
    std::cout << xk;
}
