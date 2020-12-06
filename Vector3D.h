#ifndef __vector__
#define __vector__

#include<iostream>
#include<math.h>
#include<assert.h>
using namespace std;
typedef float f;
class vector3d
{
public:
    f x, y, z;
    vector3d()
    {
        x = 0;
        y = 0;
        z = 0;
    }

    vector3d(f x1, f y1, f z1 = 0)
    {
        x = x1;
        y = y1;
        z = z1;
    }
    vector3d(const vector3d& vec);
    vector3d operator+(const vector3d& vec);
    vector3d& operator+=(const vector3d& vec);
    vector3d operator-(const vector3d& vec);
    vector3d& operator-=(const vector3d& vec);
    vector3d operator*(f value);
    vector3d& operator*=(f value);
    vector3d operator/(f value);
    vector3d& operator/=(f value);
    vector3d& operator=(const vector3d& vec);
    f dot_product(const vector3d& vec); //scalar dot_product
    vector3d cross_product(const vector3d& vec);    //cross_product
    f magnitude();  //magnitude of the vector
    vector3d normalization();   //nor,malized vector
    f square(); //gives square of the vector

    f distance(const vector3d& vec);    //gives distance between two vectors
    f show_X(); //return x
    f show_Y(); //return y
    f show_Z(); //return z
    void disp();    //display value of vectors
};

#endif //__vector__
