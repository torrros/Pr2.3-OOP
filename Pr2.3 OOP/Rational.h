#pragma once
#include <string>
#include <iostream>

using namespace std;

class Rational
{
	int a;
	int b;
	
public:
	Rational(int a=1,int b=1);
	Rational(const Rational& r);
	Rational& operator=(const Rational& r);
	~Rational();
	
	friend ostream& operator<<(ostream& out, const Rational& r);
	friend istream& operator>>(istream& in, Rational& r);
	operator string () const;
	
	double value() const { return 1. * a / b; }
	
	Rational& operator++();
	Rational& operator--();
	Rational operator++(int);
	Rational operator--(int);

	friend Rational operator/(const Rational& r1, const Rational& r2);
	friend bool operator==(const Rational& r1, const Rational& r2);
	friend bool operator<(const Rational& r1, const Rational& r2);
	friend bool operator>(const Rational& r1, const Rational& r2);
};
		


