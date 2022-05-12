#include "Rational.h"
#include <iostream>
#include <sstream>

Rational::Rational	(int a,int b)
{
	this->a = a;
	this->b = b;
}

Rational::Rational(const Rational& r)
{
*this= r;
}

Rational& Rational::operator= (const Rational& r)
{
	this->a = r.a;
	this->b = r.b;
	return *this;
}

Rational::operator string()const
{
	std::ostringstream ss;
	ss << a << "/" << b;
	return ss.str();
	
}

Rational::~Rational	()
{
}

Rational& Rational:: operator++()
{
	a++;
	return *this;
}

Rational& Rational:: operator--()
{
	a--;
	return *this;
}

Rational Rational:: operator++(int)
{
  Rational r(*this);
  a++;
  return r;
}

Rational Rational:: operator--(int)
{
  Rational r(*this);
  a--;
  return r;
}

ostream& operator<<(ostream& out, const Rational& r)
{
	out << (string)r;
	return out;
}

istream& operator>>(istream& in, Rational& r)
{
	cout << "a - "; cin >> r.a;
	cout << "b - "; cin >> r.b;
	return in;
}

Rational operator/ (const Rational& r1, const Rational& r2)
{
	Rational r;
	r.a = r1.a * r2.b;
	r.b = r2.a * r1.b;
	return r;
}

bool operator==	(const Rational& r1, const Rational& r2)
{
	return (r1.a == r2.a && r1.b == r2.b);
}
	
bool operator<(const Rational& r1, const Rational& r2)
{
		return (r1.a * r2.b < r2.a * r1.b);
}

bool operator>(const Rational& r1, const Rational& r2)
{
	return (r1.a * r2.b > r2.a * r1.b);
}