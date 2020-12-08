#include <iostream>
#include <string>
#include <fstream>

class FileException{
private:
	std::string m_error;

public:
	FileException(std::string error) : m_error(error){
	}

	 const char* getError() { return m_error.c_str(); }
};

void func(const char * fname1, const char * fname2, int n){
    int mx = -100;
    try{
        std :: ifstream f(fname1);
        if (!f) throw FileException("can`t open file 1");
        std :: ofstream fout(fname2);
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
    catch(FileException &exception){
        std ::cerr << "A file exception occured: " << exception.getError() << std :: endl;
    }
}

int main(){
    int n;
    std :: cout << " input your number: " << std :: endl;
    std :: cin >> n;
    func("myfile.txt", "maxes.txt", n);
}
