#ifndef __angle__
#define __angle__
#include <iostream>
#include <cmath>
#include "Quaternion_Makowetska.h"
class Angle3D{
    public:
    float angle;
    Angle3D(){
        angle = 0;
    }
    Angle3D(float variable){
        angle = variable;
    }
    Quaternion to_quat(){
    float a = cos(angle/2);
    float b = sin(angle/2);
    float c = sin(angle/2);
    float d = sin(angle/2);
    return Quaternion(a,b,c,d);
    }
};




#endif
