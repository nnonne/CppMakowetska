#ifndef __matrix__
#define __matrix__

#include <stdio.h>
#include <fstream> // for file access
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include "Vector3D.h"
#include <string>
#include <vector>
#include <tuple>
#include <cmath>

using namespace std;

class Matrix {
private:
    unsigned m_rowSize;
    unsigned m_colSize;
    vector<vector<double> > m_matrix;
public:
    Matrix(unsigned, unsigned, double);
    //Matrix(const Matrix&);


    //Matrix operation
    Matrix operator+(Matrix&);
    Matrix operator-(Matrix&);
    Matrix operator*(Matrix&);
    vector3d operator*(vector3d&);
    Matrix transpose();
    double abs();
    double det();

    // Scalar Operations
    Matrix operator+(double);
    Matrix operator-(double);
    Matrix operator*(double);
    Matrix operator/(double);

    // Aesthetic Methods
    double& operator()(const unsigned&, const unsigned&);
    unsigned getRows() const;
    unsigned getCols() const;





};

#endif //__matrix__

