#include <iostream>
int main(){
    int n;
    std :: cout << "input n" <<  std :: endl;
    std :: cin >> n;
    int ans = 1;
    int k = 0;
    do{
        ans *= 2;
        k ++;
    }
    while (ans <= n);
    std :: cout << k;
}
