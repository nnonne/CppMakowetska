#include <iostream>
int main(){
    const size_t size = 5;
    int arr[size] = {0};
    int even = 0, odd = 0;
    for (int i = 0; i < size; i++){
        int elem;
        std :: cout  << "Enter your number. Left: " << size - i - 1 << " Number: ";
        std :: cin >> elem;
        arr[i] = elem;
        if (elem % 2 == 0){
            even += elem;
        }
        else {
            odd += elem;
        }
}
    std :: cout << "Sum of even numbers: " << even << std :: endl;
    std :: cout << "Sum of odd numbers: " << odd << std :: endl;

}

