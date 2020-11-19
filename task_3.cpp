#include <iostream>
#include <cmath>
int main(){
    const size_t size = 10;
    double arr[size] = {0};
    double suma = 0;
    for (int i = 0; i < size; i++){
        double elem;
        std :: cout  << "Enter your number. Left: " << size - i - 1 << " Number: ";
        std :: cin >> elem;
        arr[i] = elem;
        if (elem > exp(1)){
            suma += elem;
        }
}
    std :: cout << "Sum of numbers that bigger than " << exp(1) << " : " << suma << std :: endl;
}

