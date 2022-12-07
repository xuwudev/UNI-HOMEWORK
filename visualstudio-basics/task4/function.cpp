//var 26
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	double const  t = 2;
	double b, y, x, a;

	cout << "b = ";
	cin >> b;
	cout << " " << endl;

	a = exp(t + b);
	cout << "a = " << a << endl;
	cout << " " << endl;

	x = sqrt(a + b);
	cout << "x = " << x << endl;
	cout << " " << endl;

	y = pow(log10(abs(x + a)), 2);
	cout << "y = " << y << endl;

	return 0;
}