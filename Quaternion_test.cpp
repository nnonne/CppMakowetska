
#include "Quaternion_Makowetska.h"

int test(){
    int state;
    std :: cout << "If you want to use console, print 0." << std :: endl << "If you want to use files, print 1." << std :: endl << "If you want to use binary files print 2" << std :: endl;
    std :: cin >> state;
    Quaternion a,b,c,d,f,e;
    //std :: cout << "input your quaternion:" << std :: endl;
    a.inputq();
    //std :: cout << "input your quaternion:" << std :: endl;
    b.inputq();
    if (state == 2){
        std :: string file;
        std :: cout << "Input the name of file you want to choose: ";
        std :: cin >> file;
        std :: ofstream fin;
        fin.open(file, std :: ios::binary);
        a.fwriteq(fin);
        b.fwriteq(fin);
        fin.close();
        std :: ifstream fout;
        fout.open(file,std :: ios::binary);
        a.freadq(fout);
        b.freadq(fout);
        fout.close();
    }
    else if (state == 1){
        std :: string file;
        std :: cout << "Input the name of file you want to choose: ";
        std :: cin >> file;
        std :: ofstream fin;
        fin.open(file);
        a.fwriteq(fin);
        b.fwriteq(fin);
        fin.close();
        std :: ifstream fout;
        fout.open(file);
        a.freadq(fout);
        b.freadq(fout);
        fout.close();
    }
    c = a * b;
        c.printq();
        d = a + b;
        d.printq();
        f = a - b;
        f.printq();
        e = a / b;
        e.printq();
}
