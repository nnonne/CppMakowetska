#include<iostream>
#include <fstream>

std :: string change(std :: string w){
    std :: string s
    for (int i = 0; i < w.size(); i++){
        if ( i != 0 && w[i - 1] == ' ' && w[i] != ' ') continue;
        if (i == 0 && w[i] != ' ') continue;
        s += w[i];
        }
    return s;
}
int main() {
    std :: string text, ans;
    std :: cout << "input your string ";
    std :: cin >> text;
    std :: cout << change(text);

}
