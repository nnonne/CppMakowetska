#include "Figure3D_Makowetska.h"


int test3(){

    int state;
    std :: cout << "If you want to use console, print 0." << std :: endl << "If you want to use files, print 1." << std :: endl << "If you want to use binary files print 2." << std :: endl;
    std :: cin >> state;

    Figure3D a,b,c,d;
    a.inputf();

    b.inputf();
    b.printff();

    if (state == 1){
        std :: string file;
        std :: cout << "Input the name of file you want to choose: ";
        std :: cin >> file;
        std :: ofstream fin;
        fin.open(file);
        a.fwritef(fin);
        b.fwritef(fin);
        fin.close();
    }
    else if (state == 2){
        std :: string file;
        std :: cout << "Input the name of file you want to choose: ";
        std :: cin >> file;
        std :: ofstream fin;
        fin.open(file, std :: ios::binary);
        fin.close();
    }
    Point3D p1, p2;
    std :: cout << "input points for projection and turning: " << std :: endl;
    p1.inputp();
    p2.inputp();
    b.projection3D(p1);
    b.printff();
    std :: cout << "input your angle: ";
    float ang;
    std :: cin >> ang;
    Angle3D angle = Angle3D(ang);
    a.turn3D(angle,p2);
    a.printff();

}
