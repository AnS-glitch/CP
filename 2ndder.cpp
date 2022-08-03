//2nd derivative
#include<iostream>
#include<cmath>
#define epsilon .0001
using namespace std;

double function(double x)	{
return 3*x*x*x+2*x*x+5*x;
}

double forward(double x,double h)	{
return (function(x+2*h)-2*function(x+h)+function(x))/(h*h);
}

double central(double x,double h)	{
return (function(x+h)-function(x-h))/(2*h);
}

double backward(double x,double h)	{
return (function(x)-function(x-h))/h;
}

int main()	{
double x,h;
cin>> x>>h;
cout<<"Forward "<<forward(x,h)<<endl<<"Central "<<central(x,h)<<endl<<"Backward "<<backward(x,h)<<endl;
return 0;
}
