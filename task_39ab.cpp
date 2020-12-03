#include <iostream>
#include <cmath>

int main(){
    std :: cout << "task a)" << std :: endl;
    int a1 = 0, a2 = 1, suma1 = 4;
    int n;
    std :: cout << "input n" << std :: endl;
    std :: cin >> n;
    for (int k = 3; k <= n;k++){
        int ak = a2 + k*a1;
        suma1 += pow(2,k) * ak;
        a1 = a2;
        a2 = ak;
    }
    std :: cout << suma1 << std :: endl;

    std :: cout << "task b)" << std :: endl;
    float b1 = 1, b2 = 1, suma2 = 12;
    int m;
    std :: cout << "input m" << std :: endl;
    std :: cin >> m;
    for (int i = 3; i <= m;i++){
        float bi = b2/i + b1;
        suma2 += pow(float(3),i) / bi;
        b1 = b2;
        b2 = bi;
    }
    std :: cout << suma2 << std :: endl;

}

