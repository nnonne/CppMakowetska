#include "Point3D_Makowetska.h"
//generator1
Point3D :: Point3D(){
	x = 0;
	y = 0;
	z = 0;
}
//generator2
Point3D :: Point3D (float x1, float y1, float z1){
	x = x1;
	y = y1;
	z = z1;
}
//generator3
Point3D :: Point3D(const Point3D & p){
	x = p.x;
	y = p.y;
	z = p.z;
}
//set x
void Point3D :: SetX(float x){
	this -> x = x;
}
// get x
float Point3D :: GetX() const{
	return this -> x;
}
//set y
void Point3D :: SetY(float y){
	this -> y = y;
}
// get y
float Point3D :: GetY() const{
	return this -> y;
}
//set z
void Point3D :: SetZ(float y){
	this -> z = z;
}
// get z
float Point3D :: GetZ() const{
	return this -> z;
}

Point3D Point3D :: operator+(const Point3D & p){
	Point3D tmp;
	tmp.SetX(this -> x + p.GetX());
	tmp.SetY(this -> y + p.GetY());
	tmp.SetZ(this -> z + p.GetZ());
	return tmp;
}
Point3D Point3D :: operator-(const Point3D & p){
	Point3D tmp;
	tmp.SetX(this -> x - p.GetX());
	tmp.SetY(this -> y - p.GetY());
	tmp.SetZ(this -> z - p.GetZ());
	return tmp;
}

Point3D Point3D :: operator*(float &a){
	x = x * a;
	y = y * a;
	z = z * a;
	return Point3D(x,y,z);
}
void Point3D :: fwritep(std :: ofstream &f){
    std :: string line = '(' + std :: to_string (x) + ',' + std :: to_string(y) + ',' + std :: to_string(z) + ")\n";
    f << line;
}
void Point3D :: freadp(std :: ifstream &f){
    std :: string s;
    f >> s;
    int state = 0;
    float x = 0, y = 0, z = 0;
    for (int i = 0; i < s.size(); i++){
        if (state == 0 && isdigit(s[i])){
            x = x*10 + float(s[i]);
        }
        if (state == 0 && i != 0 && s[i-1] == '-'){
            x *= -1;
        }
        if (s[i] == ',') state ++;
        if (state == 1 && isdigit(s[i])){
            y = y*10 + float(s[i]);
        }
        if (state == 1 && s[i-1] == '-'){
            y *= -1;
        }
        if (state == 2 && isdigit(s[i])){
            z = z*10 + float(s[i]);
        }
        if (state == 2  && s[i-1] == '-'){
            z *= -1;
        }
    }

    //return Point3D(x,y,z);
}
// input
void Point3D :: inputp(){
    float x,y,z;
    std :: cout << "input your point: " << std :: endl << "x = ";
    std :: cin >> this -> x ;
    std :: cout << "y = ";
    std :: cin >>  this -> y ;
    std :: cout << "z = ";
    std :: cin >>   this -> z ;

}
//print
void Point3D :: printp(){
    std :: cout << "(" << x << "," << y << "," << z << ")" << std :: endl;
}
Point3D  cyl_to_dec(Cylindric &c){

        float x = c.rho * cos(c.fi);
        float y = c.rho * sin(c.fi);
        float z = c.h;
        return Point3D(x,y,z);
}
Cylindric  dec_to_cyl(Point3D &p){
      float rho = sqrt(p.x*p.x + p.y * p.y + p.z * p.z);
      if (p.y == 0) return Cylindric(0,0,0);
      float fi = atan(p.x/p.y);
      float h  = p.z;
      return Cylindric(rho, fi, h);
    }
Point3D  sph_to_dec(Spheric &s){
        float x = s.rho * cos(s.fi) * sin(s.theta);
        float y = s.rho * sin(s.fi) * sin(s.theta);
        float z = s.rho * cos(s.theta);
        return Point3D(x,y,z);
}
Spheric dec_to_sph(Point3D &p){
    float rho =  sqrt(p.x*p.x + p.y * p.y + p.z * p.z);
    if (rho == 0) return Spheric(0,0,0);
    float fi = acos(p.z / (sqrt(p.x*p.x + p.y * p.y + p.z * p.z)));
    float theta = atan(p.x/p.y);
    return Spheric(rho,fi,theta);
}
