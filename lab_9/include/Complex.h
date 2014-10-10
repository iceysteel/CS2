#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
	friend ostream &operator<<(ostream &, const Complex &);
	friend istream &operator>>(istream &, Complex &);
public:
	Complex(double = 0.0, double = 0.0);
	//main operator prototypes
	Complex operator+(const Complex &) const;
	Complex operator-(const Complex &) const;
	Complex operator*(const Complex &) const;
	Complex &operator=(const Complex&);
	//bool operators
	bool operator==(const Complex&) const;
	bool operator!=(const Complex&) const;
private:
	double real;
	double imaginary;
};
#endif

