#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	float a, b, c, root1, root2, discriminant, realPart, complexPart;
	cout << "Enter coefficients a, b and c" << endl;
	cin >> a >> b >> c;
	discriminant = b * b - 4*a*c;
	if (discriminant < 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2*a);
		root2 = (-b - sqrt(discriminant)) / (2*a);
		cout << "Roots are real and different" << endl;
		cout << "root1 =" << root1 << endl;
		cout << "root2 =" << root2 << endl;
	}
	else if (discriminant = 0)
	{
		cout << "Roots are real and same" << endl;
		root1 = (-b + sqrt(discriminant)) / (2*a);
		cout << "root1 = root2 =" << root1 << endl;
	}
	else
	{
		realPart = -b / (2 * a);
		complexPart = sqrt(-discriminant) / (2*a);
		cout << "root1" << realPart << "+" << complexPart <<"i" << endl;
		cout << "root2" << realPart << "-" << complexPart << "i" << endl;


	}
}
