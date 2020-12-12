#ifndef __sphere__
#define __sphere__
#include <iostream>
#include <cmath>
#include "Point3D_Makowetska.h"
struct Spheric{
    float rho;
    float fi;
    float theta;
    public:
    Spheric(){
      float rho = 0, fi = 0, theta = 0;
    }
    Spheric(float r, float f, float t){
      float rho = r, fi = f, theta = t;
    }
    void printsph(){
        std :: cout << "rho = " << rho << std :: endl;
        std :: cout << "phi = " << fi << std :: endl;
        std :: cout << "theta = " << theta << std :: endl;
    }
};


#endif
