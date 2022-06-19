//The even wave functions for a finite square well give rise to tan(z) = sqrt[{(z_0/z)^2}-1]
//Where, z_0 = (a/ℏ)sqrt(2mv_0) is a measure of size of the well & z= la with l = sqrt{2m(E+V_0)}/ℏ
#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
#define a .0001
#define h .000000006	//Some arbitrary value since ℏ is really small
#define m .000009	//again some abitrary value for mass of electron

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
