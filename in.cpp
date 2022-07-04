//Numerical Integration(Calculating)
#include<iostream>
#include<cmath>
using namespace std;
double function(double x)	{
return 1/(1+sin(x));
}

double simpson1_3(double a, double b,int n)		{
int i;
double I=0,J=0;
double h=(b-a)/n;
for (i=1;i<n;i+=2)	{
	I=I+function(a+i*h);	
	}
for(i=2;i<n;i+=2)	{
J=J+function(a+i*h);
	}

return (h/3)*(function(a)+4*I+2*J+function(b));
}

double simpson3_8(double a, double b,int n)		{
int i;
double I=0,J=0;
double h=(b-a)/n;
for (i=1;i<n;i++)	{	
	if(i%3 == 0)	{
		I=I+function(a+i*h);
		}
		else
		J=J+function(a+i*h);
	}


return (3*h/8)*(function(a)+2*I+3*J+function(b));
}

double trapezoidal(double a,double b,double n)		{
int i;
double I=0;
double h=(b-a)/n;
for(i=1;i<n;i++)	{
	I=I+function(a+i*h);
	}
return (h/2)*(function(a)+function(b)+2*I);
}

int main()	{
cout<<"1/3 Rule "<<simpson1_3(0,1.56,30)<<endl<<"3/8 Rule "<<simpson3_8(0,1.56,30)<<endl<<"Trapezoidal Rule "<<trapezoidal(0,1.56,30)<<endl;
return 0;
}
