#include <iostream>
class Ratio {
public:
	int nominator;
	int denominator;


	void show() {
		std :: cout << nominator << "/" << denominator<< std :: endl;
	}
	void set(int n, unsigned d) {
		nominator = n;
		denominator = d;
	}
	int input() {
		std :: cout << "Enter num: ";
		std :: cin >> nominator;
		std :: cout << "Enter den: ";
		std :: cin >> denominator;
		return 0;
	}
	Ratio add(Ratio &x) {
		Ratio a;
		a.nominator = (nominator * x.denominator) + (denominator * x.nominator);
		a.denominator = denominator * x.denominator;
		a.reduce(a);
		return a;
	}
	Ratio mult(Ratio &x) {
		Ratio a;
		a.nominator = nominator * x.nominator;
		a.denominator = denominator * x.denominator;
		a.reduce(a);
		return a;
	}

	int setNom(int x) {
		nominator = x;
		return 0;
	}

	int setDen(unsigned x) {
		if (x != 0) {
			denominator = x;
			return 0;
		}
		return 1;
	}

	static int NSD(long long x, long long y) {
		if (x > y) {
			if (y == 0) return x;
			return NSD(y, x % y);
		}
		if (x == 0)return y;
		return NSD(x, y % x);
	}

private:
	void reduce(Ratio x) {
		Ratio b;
		unsigned nsd = NSD(x.nominator,x.denominator);
		b.nominator =x.nominator/ nsd;
		b.denominator =x.denominator/ nsd;
	}
};

int main() {
	Ratio r1,r2;
	int n, d;

	r1.input();
	r2.input();
	r1.show();

	Ratio r3, r4;
	r3 = r1.add(r2);
	r3.show();
}
