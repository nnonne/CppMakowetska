#include <iostream>
#include<exception>
# include <fstream>
using namespace std;
struct ZeroDenom :public std::exception {
public:
	const char* what() {
		return "Denominator can\'t be 0";
	}
};

class Ratio {
	int x;
	unsigned y;
public:
	Ratio() {
		x = 0; y = 1;
	}

	Ratio(int x1, unsigned y1) {
		if (y1 == 0) {
			throw ZeroDenom();
		}
		x = x1; y = y1;
	}

	bool setAll(int x1, unsigned y1) {
		if(y1==0){
			throw ZeroDenom();
		}
		x = x1; y = y1;
		return true;
	}

	bool setDenom(unsigned y1) {
		if ((y1 == 0)) {
			throw ZeroDenom();
		}
		y = y1;
		return true;
	}

	void setNom(int x1) {
		x = x1;
	}
	Ratio add(const  Ratio& z) {
		Ratio a;
		int n = z.x * y + z.y * x;
		int d = z.y * y;
		return Ratio(n, d);
	}
	Ratio operator+(const  Ratio& z) {
		int n = z.x * y + z.y * x;
		int d = z.y * y;
		return Ratio(n, d);
	}

	Ratio subtraction(const  Ratio& z) {
		Ratio a;
		int n = z.x * y - z.y * x;
		int d = z.y * y;
		return Ratio(n, d);
	}
	Ratio operator-(const  Ratio& z) {
		int n = z.x * y - z.y * x;
		int d = z.y * y;
		return Ratio(n, d);
	}

	void show() {
		std::cout << x << "/" << y << std::endl;
	}

	friend std::ostream& operator<<(std::ostream &output, const Ratio& D) {
		output << D.x << "/" << D.y << "\n";
		return output;
	}

	friend std::istream& operator>>(std::istream &input, Ratio& D) {
		input >> D.x >> D.y;
		return input;
	}

	friend void writeToFile(std::string fname, Ratio r) {

	}
	void writeToFile(std::string fname, Ratio r) {
		try {
			std::fstream f1;
			f1.open(fname, std::ios::app);
			f1 << r.x << r.y;
			f1.close();
		}
		catch (std::exception& e) {
			std::cerr << "problem with file "<<fname;
			return;
		}
		catch (...) {
			std::cerr << "problem with writing to file";
		}
	}


};

int main() {
	Ratio x(1, 2), y(2, 1), z;
	z = x + y;
	std::cout << z;
	try {
		Ratio z1(1, 0);
		z1.setDenom(0);
	}
	catch (std::exception& e) {
		ZeroDenom* p = static_cast<ZeroDenom*>(&e);
		std::cout << "Exception caught: " << p->what() << std::endl;
		Ratio z1 (1, 1);
		z1.setNom(2);
		std::cout << z1;
	}
}
