#include <iostream>
#include <string>
#include "Rational.h"

using namespace std;
int main()
{
	Rational r1, r2;
	cin >> r1;
	cin >> r2;

	cout << r1 << " / " << r2 << " - " << r1 / r2 << endl;
	cout << r1 << " == " << r2 << " - " << (r1 == r2) << endl;;
	cout << r1 << " < " << r2 << " - " << (r1 < r2) << endl;;
	cout << r1 << " > " << r2 << " - " << (r1 > r2) << endl;;
	return 0;
}