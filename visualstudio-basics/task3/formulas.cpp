//var 6

#include<iostream>
#include <math.h>

using namespace std;

int main()
{

    float a;
    float z1, z2;

    cout << "value а:";
    cin >> a;


    z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);      /* result is z = 1.83823 */
    cout << "Value of a first count:" << z1 << endl;

    z2 = 4 * cos(a / 2) * cos(5 * a / 2) * cos(4 * a);     /* result is z = 1.83823 */
    cout << "Value of a second count:" << z2 << endl;

    return 0;
}