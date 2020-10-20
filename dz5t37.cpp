#include <iostream>

int main(){
    float v0 = 0, v1 = 0, v2 = 3/2, vn;
    int n;
    std :: cout << "n = ";
    std :: cin >> n;

    if (n == 0 || n == 1) std :: cout << " vn = 0 ";
    else if (n == 2) std :: cout << "vn = 3/2";
    else if (n < 0) std :: cout << "wrong number ";
    else {
        for (int i = 3; i <= n; i++){
        vn = (float((i - 2))/((i - 3)*(i - 3) + 1))* v2 - v1*v0 +1;
        v0 = v1;
        v1 = v2;
        v2 = vn;
    }
    std :: cout << "vn = " << vn << std :: endl;
}
}
