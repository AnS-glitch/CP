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


double B_n(double x)	{
double C,p=0,n;
/*for (int i=1;i<=20;i++)
	{
		
	
		
		
		p=p+pow(i,-2*n);
		}*/
C=(pow(-1,n-1)*2*fact(2*n))/pow((2*3.1416),2*n);
return C;
}
int main()	{
int n;
cin>>n;
cout<<B_n(n)<<endl;
return 0;
}
