#include <iostream>
int main(){
    int m;
    std :: cout << "input m" <<  std :: endl;
    std :: cin >> m;
    int ans = 1;
    int k = 0;
    do{
        ans *= 4;
        k ++;
    }
    while (ans <= m);
    std :: cout << k-1;
}
