#include "Figure3D_Makowetska.h"

Figure3D :: Figure3D(){
    std :: vector<Point3D> points = {Point3D()};
    std :: vector <std :: pair<Point3D, Point3D>> edges = {{Point3D(),Point3D()}};
}
Figure3D :: Figure3D( std :: vector<Point3D> p, std :: vector <std :: pair<Point3D, Point3D>> e){
    points = p;
    edges = e;
}
Point3D Figure3D:: turnpoint3D(Point3D p1, Angle3D a, Point3D p2){
    Quaternion newp = Quaternion(0, -sin(a.angle/2),-sin(a.angle/2),-sin(a.angle/2)) * Quaternion(0,p1.x-p2.x,p1.y-p2.y,p1.z-p2.z) / Quaternion(0, -sin(a.angle/2),-sin(a.angle/2),-sin(a.angle/2));

    return Point3D(newp.b + p2.x, newp.c+p2.y, newp.d+p2.z);
}
void Figure3D :: turn3D( Angle3D a, Point3D p){
    for (int i = 0; i < points.size(); i++){
        points[i] = (turnpoint3D(points[i],a,p));
    }
    for (int j = 0; j < edges.size(); j++){
        edges [j] = (std :: make_pair(turnpoint3D(edges[j].first,a,p), turnpoint3D(edges[j].second,a,p)));
    }
}
Point3D Figure3D :: pointprojection(Point3D p, Point3D normal){
    float A = normal.x;
    float B = normal.y;
    float C = normal.z;
    float t = -1* (A * p.x + B * p.y + C * p.z)/(A * A + B * B + C * C);
    float px = A * t + p.x;
    float py = B * t + p.y;
    float pz = C * t + p.z;
    return Point3D(px,py,pz);
}


void Figure3D :: projection3D( Point3D p){
    for (int i = 0; i < points.size(); i++){
        points[i] = (pointprojection(points[i],p));
    }
    for (int j = 0; j < edges.size(); j++){
        std :: pair<Point3D, Point3D> vec = edges[j];
        edges[j] = (std :: make_pair(pointprojection(vec.first,p), pointprojection(vec.second,p)));
    }
}
void Figure3D :: fwritef(std :: ofstream &f){
    f << "points are: ";
    for (int i = 0; i < points.size(); i++){
        Point3D p = points[i];
        p.fwritep(f);
    }
    f << "edges are: ";
    for (int j = 0; j < edges.size(); j++){
        std :: pair<Point3D, Point3D> vec = edges[j];
        f << '(';
        vec.first.fwritep(f);
        vec.second.fwritep(f);
        f << ')';
    }
}
void Figure3D :: inputf(){
    points.clear();
    edges.clear();
    int num_p, num_e;
    std :: cout << "input the number of points: " ;
    std :: cin >> num_p;
    if (num_p != 0){
        for (int i = 0; i < num_p; i++){
            Point3D f;
            f.inputp();
            points.push_back(f);
        }
        std :: cout << "input the number of edges: ";
        std :: cin >> num_e;
        if (num_e != 0){
            std :: cout << "input vectors: " << std :: endl;
            for (int i = 0; i < num_e; i++){
                Point3D f = Point3D(),s = Point3D();
                f.inputp();
                s.inputp();
                edges.push_back(std :: make_pair(f,s)) ;
            }
        }
    }
}

void Figure3D :: printff(){
    std :: cout << "points: " << std :: endl;
    for (int i = 0; i < points.size(); i++){
        points[i].printp();
    }
    std :: cout << "edges: " << std :: endl;
    for (int i = 0; i < edges.size(); i++){
        edges[i].first.printp();
        edges[i].second.printp();
    }
}






