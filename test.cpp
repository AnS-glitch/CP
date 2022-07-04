//Bernoulli numbers
#include<iostream>
#include<cmath>

using namespace std;
double fact (int y)	{
int f=1;
for (int i=1;i<=y;i++)	{                                                          
	f*=i;
	}
	return f;
}

double B_n(double n)	{
double s=0,C;
for (int i=1;i<=200;i++)	{
	s=s+pow(i,-2*n);
	}
C=(pow(-1,n-1)*2*fact(2*n))/pow((2*3.1416),2*n);
return s*C;
}


int main()	{
double n,C;
cin>>n;
cout<<B_n(n)<<endl;
return 0;
}
