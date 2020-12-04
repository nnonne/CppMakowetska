#include<iostream>
#include <fstream>

int isin(std :: string w,std :: string s){
    for (int i = 0; i < w.size(); i++){
        //
        if (s.find(w[i]) == -1){
            return 0;
        }
    }
    return 1;
}
int main() {
    std :: string word, symb;
    std :: cout << "input your word: ";
    std :: cin >> word;
    std :: cout << "input symbols to check: ";
    std :: cin >> symb;
    std :: cout << isin(word,symb);

}
