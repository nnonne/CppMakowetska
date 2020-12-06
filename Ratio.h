#ifndef RATIO_H
#define RATIO_H
#include<iostream>
using namespace std;
class Ratio {
public:
	int nominator;
	int denominator;


	void show();
	void set(int n, unsigned d);
	int input();
	Ratio add(Ratio& x);
	Ratio mult(Ratio& x);

	int setNom(int x);

	int setDen(unsigned x);

	static int NSD(long long x, long long y);
private:
	void reduce(Ratio x);
};
#endif RATIO_H
