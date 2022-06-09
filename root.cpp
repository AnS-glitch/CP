#include <iostream>
#include <cmath>
#define EPSILON 0.000001
using namespace std;

double func (double x,double n) {
return x*x-n;
}

void bisection (double a, double b,double n)	{
double c;

if ( func(a,n) * func(b,n) > 0  )	{
	cout << "No roots" <<endl;
}
	while ( abs(b-a) >= EPSILON)		{

		c= (a+b)/2;
if (func(c,n)==0)	{
break;	
// Break is necesary otherwise it would fall into infinite loop

}
	else if (func(c,n) * func(a,n) <0)	{
	b=c;
	}
		else if(func(c,n) * func(b,n) <0)	{
		a=c;
		}
			else
			break;
}

cout << "Root +-"<< c <<endl;
}


int main ()
{
double a,b,c;
cout<<"First input your number want to root then the range of that root "<<endl;
cin>>a>>b>>c;
bisection (b,c,a);
return 0;
}


