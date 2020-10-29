#include <iostream>
int main(){
    int n;
    std :: cout << "input n" <<  std :: endl;
    std :: cin >> n;
    int ans = 1;
    for (int i = 1;i <= n; i++){
    ans *= i;
    }
    std :: cout << ans;
}
