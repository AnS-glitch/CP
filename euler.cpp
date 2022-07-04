//Solving ODE using Euler's method
#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

double function(double t,double y)	{
return 2-2*y-exp(-4*t);
}

void euler(double h,double t0,double y0)	{
double y=y0;
ofstream file;
file.open("Euler.dat");
for(double t=t0;t<=5;t+=h)	{
	file<<t<<" "<<y<<" "<<(1+.5*exp(-4*t)-.5*exp(-2*t))<<endl;
	y+=h*function(t,y);
	}
file.close();
}

int main()	{
double a,b,c;
cin>>a>>b>>c;
euler(a,b,c);

return 0;
}
