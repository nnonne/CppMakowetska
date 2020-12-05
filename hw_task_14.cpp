#include<iostream>
#include <string>

void max_word(std :: string w){
    int n = 0,k,i;
    unsigned p;
    std :: string ans,s;
    for (int i = 0; i < w.size(); i++){
        k = 0;
        do{
            s += w[i];
            k++;
            i++;

        }while ((w[i] != ' ') && (i < w.size()));
        if (k >= n) ans = s;
        else s.clear();
        i +=1;
    }
    std :: cout << ans;
}
int main() {
    std :: string text;
    std :: cout << "input your string ";
    std :: cin >> text;
    max_word(text);
}
