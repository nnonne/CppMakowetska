#include <iostream>

class Vector {
private:
	double* arr;
	unsigned int size;
public:
	Vector() {size = 0; arr = nullptr;}


	Vector(unsigned int n) {
		size = n; arr = new double[size];
		for (int i = 0; i < size; i++) {
			arr[i] = 0;}
	}

	Vector(double *arr, unsigned int n) {
		size = n; this->arr = new double[size];
		for (int i = 0; i < size; i++) {
			this->arr[i] = arr[i];}
	}


	Vector(const Vector& v) {
		size = v.size;
		arr = new double[size];
		for (int i = 0; i < size; i++) {
			this->arr[i] = arr[i];}
	}
	unsigned int GetSize() {
		return size;
	}
	~Vector() {
		if (arr != nullptr) {
			delete[]arr;
		}
	}

};

int main() {
	Vector v1;
	Vector v2(5);
}
