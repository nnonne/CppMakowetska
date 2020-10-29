#include <iostream>
#include <cmath>
//cycles task 1 classwork
int main(){
    float x;
    int n;
    std :: cout << "input x" <<  std :: endl;
    std :: cin >> x;
    std :: cout << "input n" <<  std :: endl;
    std :: cin >> n;
    double arg = sin(x);
    double nas;
    for (int i = 1; i <=n; i++){
        nas = sin(arg);
        arg = nas;
}

    std :: cout << nas <<  std :: endl;
}
