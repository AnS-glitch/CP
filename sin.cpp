#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double function(double x)	{
return sin(x);
}

double central(double x,double h)	{
return (function(x+h)-function(x-h))/(2*h);
}

int main()	{
ofstream file;
file.open("sind.dat");
for(double i=-6.28;i<=6.28;i=i+.1)		{
	file<< i<<" "<< function(i)<<" "<<central(i,.1)<<endl;
	}
file.close();
return 0;
}
