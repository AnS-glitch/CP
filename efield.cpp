#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double function(double r, double z)	{
return (z/4)*2*r*(pow(z*z+r*r,-1.5));
}

/*double simpson1_3(double a, double b,int n)		{
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
}*/

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

/*double trapezoidal(double a,double b,double n)		{
int i;
double I=0;
double h=(b-a)/n;
for(i=1;i<n;i++)	{
	I=I+function(a+i*h);
	}
return (h/2)*(function(a)+function(b)+2*I);
}*/

int main()	{
ofstream file;
file.open("EvZ.dat");
for(double z=1;z<=1000;z=z+.001)
{
file<<z<<" "<<simpson3_8(0,3,z,30)<<" "<<simpson3_8(0,5,z,30)<<" "<<simpson3_8(0,10,z,30)<<endl;
}
file.close();
return 0;

}
