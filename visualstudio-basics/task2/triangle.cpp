//1
#include <iostream>; 
#include <cmath>;

using namespace std;

int main()
{
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 1.0;
    double y2 = 0.0;
    double x3 = -1.0;
    double y3 = 2.0;

    //Формула Герона
    double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));

    double p = (a + b + c) / 2.0; //периметр
    double square = sqrt(p * (p - a) * (p - b) * (p - c)); //площа 

    double h = square / 0.5; //висота 
    cout<< "Висота: "<< h << endl; 
    
    //бісектриса
    double bis = sqrt(a*b*(a+b+c)*(a+b-c))/(a+b);
    cout<<"Бісектриса: "<<bis;

    return 0;
}