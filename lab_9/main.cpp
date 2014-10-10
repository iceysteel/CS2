#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	Complex x, y(4.3, 8.2), z(3.3, 1.1), k;

    //take in new numbers
	cout << "Enter a complex number in the form: (a,b)";
	cin >> k;
	cout << "x: " << x << " y:" << y << " z:" << z << " k: " << k << '\n';
	x = y + z;
	//first calculation
	cout << " x=y+z: " << x << "=" << y << "+" << z << '\n';
	x = y - z;
	//second calculation
	cout << "x=y-z: " << x << "=" << y << "-" << z << '\n';
	//final calcualtion
	x = y * z;
	cout << "x=y*z: " << x << "=" << y << "*" << z << '\n';

    //check if the two complex numbers are equal
	if (x != k)
		cout << x << "!=" << k << '\n';

	cout << '\n';
	x = k;

	if (x == k)
		cout << x << "==" << k << '\n';

}
