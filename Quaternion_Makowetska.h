#ifndef __quaternion__
#define __quaternion__
#include <fstream>
#include <string>
#include <iostream>
#include <cmath>
class Quaternion{
    public:
    float a,b,c,d; // q = a + bi + cj + dk;


    Quaternion();
    Quaternion(float a, float b,float c,float d);

    //operations:
    Quaternion operator + (Quaternion q);
    Quaternion operator - (Quaternion q);
    Quaternion operator * (Quaternion q); //for scalar i=j=k=0
    Quaternion operator / (Quaternion q);
    //for files:
    void freadq(std :: ifstream &f);
    void fwriteq(std :: ofstream &f);
    // for console:
    void inputq();
    void printq();

};




#endif
