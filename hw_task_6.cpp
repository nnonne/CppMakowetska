#include <iostream>
#include <string>
#include <fstream>
class Book{
    public:
    std :: string author;
    std :: string name;
    void output(){
        std :: cout << "Book \" " << name << " \" written by " << author << std :: endl;
    }
    Book(const std :: string &st){
        char n[st.size()], a[st.size()];
        //std :: string a,n;
        int state = 1, k = 0, j = 0;
        for (int i = 0; i < st.size(); i ++){
            if (st[i] == ' '){
                state = 0;
                continue;
            }
            if (state == 1){
                a[k] = st[i];
                k++;
            }
            else if (state == 0){
                n[j] = st[i];
                j++;
            }

        }
        author = static_cast<std :: string>(a);
        name = static_cast<std :: string>(n);
    }
};
void findbookn(const char * fname, std :: string n){
        std :: ifstream f(fname);
        std::string line1;
        while (std::getline(f, line1, '\n')) {
            Book b(line1);
            if (b.name == n){
               b.output();
            }
        }
        f.close();
    }
void findbooka(const char * fname, std :: string a){
        std :: ifstream f(fname);
        std::string line1;
        while (std::getline(f, line1, '\n')) {
            Book b(line1);
            if (b.author == a){
               b.output();
            }
        }
        f.close();
    }

int main(){
    std :: string n = "book1";
    const char * f = "books.txt";
    findbookn(f,n);
    std :: cout << std :: endl;
    std :: string a = "author1";
    findbooka(f,a);
}
