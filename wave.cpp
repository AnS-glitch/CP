#include <iostream>
#include <cmath>
#define EPSILON 0.000001
using namespace std;

double func (double x) {
return ((x* exp(x))-1);
}

void bisection (double a, double b)	{
double c;

if ( func(a) * func(b) > 0  )	{
	cout << "No roots" <<endl;
}
	while ( abs(b-a) >= EPSILON)		{

		c= (a+b)/2;
if (func(c)==0)	{
cout << c;
}
	else if (func(c) * func(a) <0)	{
	b=c;
	}
	else 
	a=c;
	}
cout << "Root "<< c <<endl;
}


int main ()
{
bisection (-10, 10);
return 0;
}


