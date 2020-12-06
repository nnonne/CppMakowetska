//#include <iostream>
#include "Ratio.h"
using namespace std;

public void Ratio:: show() {
	cout << nominator << "/" << denominator << endl;
}
public void Ratio:: set(int n, unsigned d) {
	nominator = n;
	denominator = d;
}
public void Ratio::input() {
	cout << "Enter num: ";
	cin >> nominator;
	cout << "Enter den: ";
	cin >> denominator;
	reduce(a);
}
public Ratio Ratio::add(Ratio& x) {
	Ratio a;
	a.nominator = (nominator * x.denominator) + (denominator * x.nominator);
	a.denominator = denominator * x.denominator;
	a.reduce(a);
	return a;
}
public Ratio Ratio::mult(Ratio& x) {
	Ratio a;
	a.nominator = nominator * x.nominator;
	a.denominator = denominator * x.denominator;
	a.reduce(a);
	return a;
}

public int Ratio::setNom(int x) {
	nominator = x;
	return 0;
}

public int Ratio::setDen(unsigned x) {
	if (x != 0) {
		denominator = x;
		return 0;
	}
	return 1;
}

static int Ratio::NSD(long long x, long long y) {
	if (x > y) {
		if (y == 0) return x;
		return NSD(y, x % y);
	}
	if (x == 0)return y;
	return NSD(x, y % x);
}


public void Ratio::reduce(Ratio x) {
	Ratio b;
	unsigned nsd = NSD(x.nominator, x.denominator);
	b.nominator = x.nominator / nsd;
	b.denominator = x.denominator / nsd;
}

Ratio Ratio::operator-(const Ratio& b) {
	int a = (int)(nominator * b.denominator - denominator * b.nominator);
	unsigned c = denominator * b.denominator;
	return Ratio(a, c);
}
Ratio operator-(void) {
	return Ratio(-nominator, denominator)
}
friend ostream& operator<<(ostream& output, const Ratio& D) {
	output << "" << D.nominator << "/" << D.denominator;
	return output;
}
friend istream& operator>>(istream& input, Ratio& D) {
	input >> D.nominator >> D.denominator;
	return input;
}



int main() {
	Ratio r1, r2;
	int n, d;

	r1.input();
	r2.input();
	r1.show();

	Ratio r3, r4;
	r3 = r1.add(r2);
	r3.show();

	cin >> r4;
	cout << r4;
	Ratio r5 = r1 - r4;
	cout << r5;
}