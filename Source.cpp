#include <iostream>
#include <string>
#include <conio.h>
#include "Fraction.h"

void printFraction(Fraction fraction)
{
	std::cout << fraction.numerator << '/' << fraction.denominator << std::endl;
}
void sumFraction(float a, float b, float c, float d, float *e, float *f)
{
	*e = (b * d + c * b);
	*f = (b * d);

}

int main()
{
	Fraction fraction;
	fraction.numerator = 1;
	fraction.denominator = 2;
	printFraction(fraction);
	Fraction a, b, c;
	sumFraction;
	_getch();
	return 0;
	
}