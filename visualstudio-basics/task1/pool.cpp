#include <iostream>
using namespace std;

int main()
{
    double p1, p2, p3, t;    
    //p=л/год t=год     
    cout << "p1="; cin >> p1;
    cout << "p2="; cin >> p2;
    cout << "p3="; cin >> p3;
    cout << "t="; cin >> t;
    cout << "V=" << (p1 + p2 + p3) * t << endl;
    system("pause");
    return 0;
}