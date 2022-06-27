#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double function(double x,double z)	{
return pow(log(1/x),(z-1));
}

double simpson1_3(double a, double b,double z,int n)		{
int i;
double I=0,J=0;
double h=(b-a)/n;
for (i=1;i<n;i+=2)	{
	I=I+function(a+i*h,z);	
	}
for(i=2;i<n;i+=2)	{
J=J+function(a+i*h,z);
	}

return (h/3)*(function(a,z)+4*I+2*J+function(b,z));
}

double simpson3_8(double a, double b,double z,int n)		{
int i;
double I=0,J=0;
double h=(b-a)/n;
for (i=1;i<n;i++)	{	
	if(i%3 == 0)	{
		I=I+function(a+i*h,z);
		}
		else
		J=J+function(a+i*h,z);
	}
return (3*h/8)*(function(a,z)+2*I+3*J+function(b,z));
}

double trapezoidal(double a,double b,double z,double n)		{
int i;
double I=0;
double h=(b-a)/n;
for(i=1;i<n;i++)	{
	I=I+function(a+i*h,z);
	}
return (h/2)*(function(a,z)+function(b,z)+2*I);
}

int main()	{
ofstream file;
file.open("gamma.dat");
for(double z=-5;z<=20;z=z+.1)
{
file<<z<<" "<<trapezoidal(0.0000001,1,z,9999999)<<endl;
}
file.close();
return 0;
}
