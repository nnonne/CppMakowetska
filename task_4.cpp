#include <iostream>

int main(){
    const size_t size = 6;
    int arr[size] = {0};
    double el;
    std :: cout  << "Enter your number. Left: " << size - 1 << " Number: ";
    std :: cin >> el;
    for (int i = 1; i < size - 1; i++){
        double elem;
        std :: cout  << "Enter your number. Left: " << size - i - 1 << " Number: ";
        std :: cin >> elem;
        arr[i] = elem;

        if (elem > el){
            el = elem;
        }
}
    std :: cout << "Maximum =  " << el << std :: endl;
}

