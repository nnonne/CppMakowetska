#ifndef __point__
#define __point__
#include <fstream>
#include <string>
#include <iostream>
#include <cmath>
#include "Cylindric.h"
#include "Spheric.h"


class Point3D{
  public:
  float x;
  float y;
  float z;
//generators
  Point3D();
  Point3D(float x, float y, float z);
  Point3D(const Point3D &p);
  //setters and getters
  void SetX(float x);
  float GetX()const;
  void SetY(float y);
  float GetY()const;
  void SetZ(float z);
  float GetZ()const;
  //operators
  Point3D operator+(const Point3D &p);
  Point3D operator-(const Point3D &p);
  Point3D operator*(float &a);

  // for files
  void freadp(std :: ifstream &f);
  void fwritep(std :: ofstream &f);
  // for console
  void inputp();
  void printp();
};
//cylindric coordinates
  Point3D cyl_to_dec(Cylindric &c);
  Cylindric dec_to_cyl(Point3D &p);
  //spheric coordinates
  Point3D sph_to_dec(Spheric &s);
  Spheric dec_to_sph(Point3D &p);
#endif
