#include <iostream>

using namespace std; //this actually is a bad practice, this assigns std for every atribute there, so we dont have to write each time

int main()
{	cout << "hi" << endl;
	// ofc, character out is cout, end line is endl, semi colon for line break
	int a = 5;
	int b = 10;
	cout << a+b << endl;
	cout << a*b << endl;
	cout << (1.0 * a)/b << endl;

	double c= 11.02;
	double d= 31.12;
	double calc = ((c/d)*b)+a;
	cout.precision(11); //this on running gave me precision of 10 pts so ig its from 0th position
	cout << calc << endl;
	
	return 0;
}
