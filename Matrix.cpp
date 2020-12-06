#include "Matrix.h"
using namespace std;

// Constructor for Any Matrix
Matrix::Matrix(unsigned rowSize, unsigned colSize, double initial) {
    m_rowSize = rowSize;
    m_colSize = colSize;
    m_matrix.resize(rowSize);
    for (unsigned i = 0; i < m_matrix.size(); i++)
    {
        m_matrix[i].resize(colSize, initial);
    }
}

// Addition of Two Matrices
Matrix Matrix::operator+(Matrix& B) {
    Matrix sum(m_rowSize, m_colSize, 0.0);
    unsigned i, j;
    for (i = 0; i < m_rowSize; i++){
        for (j = 0; j < m_colSize; j++){
            sum(i, j) = this->m_matrix[i][j] + B(i, j);
        }
    }
    return sum;
}

// Subtraction of Two Matrices
Matrix Matrix::operator-(Matrix& B) {
    Matrix diff(m_rowSize, m_colSize, 0.0);
    unsigned i, j;
    for (i = 0; i < m_rowSize; i++)
    {
        for (j = 0; j < m_colSize; j++)
        {
            diff(i, j) = this->m_matrix[i][j] - B(i, j);
        }
    }

    return diff;
}
// Scalar Addition
Matrix Matrix::operator+(double scalar) {
    Matrix result(m_rowSize, m_colSize, 0.0);
    unsigned i, j;
    for (i = 0; i < m_rowSize; i++)
    {
        for (j = 0; j < m_colSize; j++)
        {
            result(i, j) = this->m_matrix[i][j] + scalar;
        }
    }
    return result;
}

// Scalar Subraction
Matrix Matrix::operator-(double scalar) {
    Matrix result(m_rowSize, m_colSize, 0.0);
    unsigned i, j;
    for (i = 0; i < m_rowSize; i++)
    {
        for (j = 0; j < m_colSize; j++)
        {
            result(i, j) = this->m_matrix[i][j] - scalar;
        }
    }
    return result;
}

// Scalar Multiplication
Matrix Matrix::operator*(double scalar) {
    Matrix result(m_rowSize, m_colSize, 0.0);
    unsigned i, j;
    for (i = 0; i < m_rowSize; i++)
    {
        for (j = 0; j < m_colSize; j++)
        {
            result(i, j) = this->m_matrix[i][j] * scalar;
        }
    }
    return result;
}
//Matrix Multiplication
Matrix Matrix :: operator*(Matrix &B){
    Matrix product(m_rowSize, m_colSize, 0.0);
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            product(i,j)=0;
            for(int k=0; k < 3; k++){
                product(i,j) += this->m_matrix[i][k]*B(k,j);
            }
        }
    }
    return product;
}
// Matrix and Vector Multiplication
vector3d Matrix :: operator*(vector3d&v){
    vector3d product;
    product.x = (this->m_matrix[0][0] * v.x + this->m_matrix[0][1] * v.y + this->m_matrix[0][2] * v.z);
    product.y = (this->m_matrix[1][0] * v.x + this->m_matrix[1][1] * v.y + this->m_matrix[1][2] * v.z);
    product.z = (this->m_matrix[2][0] * v.x + this->m_matrix[2][1] * v.y + this->m_matrix[2][2] * v.z);
    return product;
}
// Absolute Value of Matrix
double Matrix::abs(){
    double x; 	// эта переменная будет хранить текущий элемент матрицы
	double max = 0; // здесь в конце будет храниться норма матрицы
	for (int i = 0; i < 3; i++) {
		double s = 0.0;
		for (int j = 0; j < 3; j++) {
		    if (this->m_matrix[i][j] >= 0){
			    s += this->m_matrix[i][j];
		    }
		    else s += (this->m_matrix[i][j]) * (-1);
		}
		if (s > max)
			max = s;
	}
	return max;
}
// Determinant
double Matrix :: det(){
    float d = 0;
    d += this->m_matrix[0][0]*this->m_matrix[1][1]*this->m_matrix[2][2];
    d += this->m_matrix[0][1]*this->m_matrix[1][2]*this->m_matrix[2][0];
    d += this->m_matrix[0][2]*this->m_matrix[1][0]*this->m_matrix[2][1];
    d -= this->m_matrix[0][2]*this->m_matrix[1][1]*this->m_matrix[2][0];
    d -= this->m_matrix[0][0]*this->m_matrix[1][2]*this->m_matrix[2][1];
    d -= this->m_matrix[0][1]*this->m_matrix[1][0]*this->m_matrix[2][2];
    return d;
}
// Scalar Division
Matrix Matrix::operator/(double scalar) {
    Matrix result(m_rowSize, m_colSize, 0.0);
    unsigned i, j;
    for (i = 0; i < m_rowSize; i++)
    {
        for (j = 0; j < m_colSize; j++)
        {
            result(i, j) = this->m_matrix[i][j] / scalar;
        }
    }
    return result;
}

// Returns value of given location when asked in the form A(x,y)
double& Matrix::operator()(const unsigned& rowNo, const unsigned& colNo)
{
    return this->m_matrix[rowNo][colNo];
}

// No brainer - returns row #
unsigned Matrix::getRows() const
{
    return this->m_rowSize;
}

// returns col #
unsigned Matrix::getCols() const
{
    return this->m_colSize;
}

// Take any given matrices transpose and returns another matrix
Matrix Matrix::transpose()
{
    Matrix Transpose(m_colSize, m_rowSize, 0.0);
    for (unsigned i = 0; i < m_colSize; i++)
    {
        for (unsigned j = 0; j < m_rowSize; j++) {
            Transpose(i, j) = this->m_matrix[j][i];
        }
    }
    return Transpose;
}
