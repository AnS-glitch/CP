#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double function(double x,double z,int m)	{
return (1/M_PI)*cos(m*x-z*sin(x));
}

double simpson1_3(double a, double b,int n,double z,int m)		{
int i;
double I=0,J=0;
double h=(b-a)/n;
for (i=1;i<n;i+=2)	{
	I=I+function(a+i*h,z,m);	
	}
for(i=2;i<n;i+=2)	{
J=J+function(a+i*h,z,m);
	}

return (h/3)*(function(a,z,m)+4*I+2*J+function(b,z,m));
}

double simpson3_8(double a, double b,int n,double z,int m)		{
int i;
double I=0,J=0;
double h=(b-a)/n;
for (i=1;i<n;i++)	{	
	if(i%3 == 0)	{
		I=I+function(a+i*h,z,m);
		}
		else
		J=J+function(a+i*h,z,m);
	}


return (3*h/8)*(function(a,z,m)+2*I+3*J+function(b,z,m));
}

int main()	{
//cout<<"1/3 Rule "<<simpson1_3(0, M_PI, 30)<<endl<<"3/8 Rule "<<simpson3_8(0,M_PI ,30)<<endl;
ofstream file;
file.open("Bessel.dat");
for(double i=-20;i<=20;i+=.01)	{
	
	file<<i<<" "<<simpson1_3(0,M_PI,30,i,0)<<" "<<simpson1_3(0,M_PI,30,i,1)<<" "<<simpson1_3(0,M_PI,30,i,2)<<" "<<simpson1_3(0,M_PI,30,i,3)<<" "<<simpson1_3(0,M_PI,30,i,4)<<endl;
		}
file.close();
return 0;
}
