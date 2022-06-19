//Finding solutions using bisection
#include <iostream>
#include <cmath>
#define EPSILON 0.000001
using namespace std;

double func (double x) {
return ((x* exp(x))-1);			//returning that function
}

void bisection (double a, double b)	{
double c;

if ( func(a) * func(b) > 0  )	{
	cout << "No roots" <<endl;
}
	while ( abs(b-a) >= EPSILON)		{	//while will continue until its solution hits epsilon

		c= (a+b)/2;
if (func(c)==0)	{
cout << c;				//conditions for exact solution 
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
bisection (-10, 10);		//Might not work if multiple solutions exists
return 0;
}


