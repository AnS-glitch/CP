//Finding roots using Newton-Raphson method
#include<iostream>
#include<cmath>
#define EPSILION .00001
using namespace std;


double func(double x) {

return x*exp(x)-1;

}


double deriv(double x){

return x*exp(x)+exp(x) ;

}


void NR(double x){

double k;

k=func(x)/deriv(x);

while(abs(k)>=EPSILION)	{
k=func(x)/deriv(x);
x=x-k;
}
cout<<"The root is : "<<x<<endl;

}

int main()
{
double a;
cout<<"Please input an assumed root : "<<endl;
cin>>a; 
NR(a);
return 0;
}







