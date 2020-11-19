#include <iostream>

int main(){
    const size_t size = 5;
    int arr[size] = {1,2,3,4,5};
    double num;
    std :: cout  << "Enter your number: ";
    std :: cin >> num;
    int coun = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] < num) {
        coun ++;
        }
    }
    std :: cout << "Amount of numbers that less than " << num << " : " << coun << std :: endl;
}

