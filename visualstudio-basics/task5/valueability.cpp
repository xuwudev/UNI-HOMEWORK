//var 6

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	double value, x, y, a;

	cout << "Область визначень x" << endl;
	cout << "Область визначень a" << endl;
	cout << "Область визначень y, окрім 0" << endl;
	cout << " " << endl;

	cout << "Введіть значення q: ";
	cin >> x;

	cout << "Введіть значення y: ";
	cin >> y;

	cout << "Введіть значення a: ";
	cin >> a;
	cout << " " << endl;

	if (y != 0)
	{
		vuraz = ((y * y - x) / (x * x - y + 1)) - ((a * a - x + 2)) / (x * x - exp(x) - 2);
		cout << "Значення виразу = " << vuraz << endl;
	}
	else
	{
		cout << "Ви ввели y=0, порушено умову" << endl;
		exit;
	}
}