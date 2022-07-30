//Secant method
#include<iostream>
#include<cmath>
#define EPSILON .00001
using namespace std;


double func(double x) {

return x*exp(x)-1;

}




void secant(double x1,double x2){

double  r;

r=((func(x2)*x1)- (x2*func(x1)))/(func(x2)-func(x1));



while(abs(r)>=EPSILON)	{
r=((func(x2)*x1)- (x2*func(x1)))/(func(x2)-func(x1));
 if(func(x1)*func(r)<0)	{
 x2=r;
 
	}
else if(func(x2)*func(r)<0)	{
x1=r;
	}

else
break;
}
cout<<"The root is : "<< r <<endl;


}


int main()
{
double x,y;
cout<<"Please input a range for root : "<<endl;
cin>>x>>y;
secant(x,y);
return 0;
}







