#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
#define a .0001
#define h .000000006
#define m .000009

double  func2( double z)	{
return (sqrt((pow((1.05/z),2))-1));
}

double func1(double x)	{
return tan(x);
}

/*double Const(double v0)	{
double z0;
z0= (a/h)*sqrt(2*m*v0);
return z0;
}
*/

int main ()	{
double z0=10;
ofstream file;
file.open("QM.dat");
	for (double i=-10;i<=10;i=i+.0001)		{
	
file<< i <<" "<< func1(i)<<" "<<func2(i)<<endl;
	}
file.close();
return 0;
}
