#include <iostream>
int main(){
    int n;
    std :: cout << "input n" <<  std :: endl;
    std :: cin >> n;
    std :: cout << "n! = ";
    for (int i = 1;i < n; i++){
    std :: cout << i << "*";
    }
    std :: cout << n;
}
