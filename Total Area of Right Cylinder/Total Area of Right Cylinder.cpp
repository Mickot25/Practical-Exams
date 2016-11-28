//Calculate the Total Area of Right Cylinder.
//Given the Radius and Altitude from the user.
//Result is manipulated to have 10 width. fixed-notation. right justified. 

#include <iostream>
#include <conio.h>
#include <iomanip>
#define pi 3.14159
using namespace std;

int main()
{
	double r, a;
	cout << "Calculate the Total Area of Right Cylinder" << endl;
	cout << "Input the radius: "; cin >> r;
	cout << "Input the altitude: "; cin >> a;

	cout << setw(10) << fixed << right << (2.0*pi*r*a) + (2 * pi * pow(r, 2.0)) << endl;

	_getch();
	return 0;
}