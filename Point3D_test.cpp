#include "Point3D_Makowetska.h"


int test2(){
    int state;
    std :: cout << "If you want to use console, print 0." << std :: endl << "If you want to use files, print 1." << std :: endl << "If you want to use binary files print 2." << std :: endl;
    std :: cin >> state;
    Point3D a,b,c,d,f,e;
    Spheric s;
    Cylindric cy;
    a.inputp();
    b.inputp();
    if (state == 1){
        std :: string file;
        std :: cout << "Input the name of file you want to choose: ";
        std :: cin >> file;
        std :: ofstream fin;
        fin.open(file);
        a.fwritep(fin);
        b.fwritep(fin);
        fin.close();
        std :: ifstream fout;
        fout.open(file);
        a.freadp(fout);
        b.freadp(fout);
        fout.close();
    }
    else if (state == 2){
        std :: string file;
        std :: cout << "Input the name of file you want to choose: ";
        std :: cin >> file;
        std :: ofstream fin;
        fin.open(file, std :: ios::binary);
        a.fwritep(fin);
        b.fwritep(fin);
        fin.close();
        std :: ifstream fout;
        fout.open(file,std :: ios::binary);
        a.freadp(fout);
        b.freadp(fout);
        fout.close();
    }
    cy = dec_to_cyl(a);
    std :: cout << "the result of convertation from decart to cylindric coordinates is: " << std :: endl;
    cy.printcyl();
    s =  dec_to_sph(b);
    std :: cout << "the result of convertation from decart to spheric coordinates is: " << std :: endl;
    s.printsph();
    c =  cyl_to_dec(cy);
    std :: cout << "the result of convertation from cylindric to decart coordinates is: " << std :: endl;
    c.printp();
    d = sph_to_dec(s);
    std :: cout << "the result of convertation from  spheric to decart coordinates is: " << std :: endl;
    d.printp();
    f = a - c;
    f.printp();
    e = b + d;
    e.printp();
}

