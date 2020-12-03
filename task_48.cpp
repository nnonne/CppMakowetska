#include <iostream>

double isprime(int m){
    bool ans = 1;
    for (int i = 2; i <= m/2; i++){
        if (m % i == 0){
            ans = 0;
            break;
        }
    }
    return ans;
}
int main(){
    int n;
    std :: cout << "input n" << std :: endl;
    std :: cin >> n;
    std :: cout << "prime dividers are " << std :: endl;
    for (int j = 2; j <= n; j++){
        if (isprime(j) && n % j == 0){
        std :: cout << j << std :: endl;
        }
    }
}

