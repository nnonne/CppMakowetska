#include "Point3D_Makowetska.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include "Angle3D_Makowetska.h"

class Figure3D{
    public:
    std :: vector<Point3D> points;
    std :: vector <std :: pair<Point3D, Point3D>> edges;
    //generators
    Figure3D();
    Figure3D(std :: vector<Point3D> p, std :: vector <std :: pair<Point3D, Point3D>> e);
    //turning
    Point3D turnpoint3D(Point3D p1, Angle3D a, Point3D p2);
    void turn3D( Angle3D a, Point3D p);
    //projections
    Point3D pointprojection(Point3D p, Point3D normal);
    void projection3D( Point3D p);
    //for files:
    void freadf(std :: ifstream &f);
    void fwritef(std :: ofstream &f);
    // for console:
    void inputf();
    void printff();

};

