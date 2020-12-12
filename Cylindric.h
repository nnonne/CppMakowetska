#ifndef __cylind__
#define __cylind__
#include <iostream>
#include <cmath>
#include "Point3D_Makowetska.h"
struct Cylindric{
    float rho;
    float fi;
    float h;
    public:
    Cylindric(){
      float rho = 0, fi = 0, h = 0;
    }
    Cylindric(float r, float f, float high){
      float rho = r, fi = f, h = high;
    }
    void printcyl(){
        std :: cout << "rho = " << this -> rho << std :: endl;
        std :: cout << "phi = " << this -> fi << std :: endl;
        std :: cout << "h = " << this -> h << std :: endl;
    }
};


#endif
