#include <iostream>
#include <fstream>
int main(){
    int n;
    std :: cout << " input your number: " << std :: endl;
    std :: cin >> n;
    try{
        int mx = -100;
        std :: ifstream f("myfile.txt");
        if (!f) throw 1;
        else{
        std :: ofstream fout("maxes.txt");
        if (!fout) throw 2;
        else{
        while(f){
            for (int i = 0; i < n; i++){
                int m;
                f >> m;
                if (m > mx) mx = m;
            }
            fout << mx << ' ';
        }
            f.close();
            fout.close();
            }
        }
    }
    catch(int i){
        std ::cout << "error: can`t open file " << i << std :: endl;
    }
}
