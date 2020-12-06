#include<iostream>
#include<math.h>
#include<assert.h>
#include "Matrix.h"
#include "Vector3D.h"
using namespace std;

int main()
{

    vector3d a = vector3d(2, 5, 7);
    vector3d b = vector3d(3, 7, 10);
    vector3d c = a + b;
    c.disp();
    Matrix x (3, 3, 2);
    Matrix y (3, 3, 3);
    Matrix z = x + y;
}
