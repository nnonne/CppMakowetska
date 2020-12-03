#include <iostream>
int main(){
    int n;
    std :: cout << "input n" <<  std :: endl;
    std :: cin >> n;
    int ans = 1;
    for (int i = n;i >=1; i -=2){
    ans *= i;
    }
    std :: cout << ans;
}
