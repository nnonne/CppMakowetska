#include <iostream>


double isin(int num, int ciph){
    int i = 10, ans = 0;
    do{
        int c = num % 10;
        num /= 10;
        if (c == ciph){
            ans = 1;
            break;
        }
    }
    while (num > 0);
    return ans;
}
int main(){
    int num,ciph, i = 1;
    std :: cout << "Enter number:  ";
    std :: cin >> num;
    std :: cout << "Enter cipher: ";
    std :: cin >> ciph;
    if (isin(num,ciph) == 1) std :: cout << ciph << " is in " <<  num;
    else std :: cout << ciph << " is NOT in " <<  num;
}
