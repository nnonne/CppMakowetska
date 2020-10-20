#include <iostream>
#include <cmath>

int main(){
    int n;
    float x,suma = 1;
    std::cout << " n = " ;
    std::cin >> n;
    std::cout << " x = " ;
    std::cin >> x;
    for (int i = 1; i <= n; i ++){
        suma += pow((x - 1),i);
    }
    std::cout << suma;

}
