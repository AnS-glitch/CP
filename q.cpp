#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;


int main ()	{

ofstream file;
file.open("Q.dat");
	for (double i=1;i<=100;i=i+.1)		{
	
file<< i <<" "<< tan(i)<<" "<<sqrt(pow((100/i),2)-1)<<endl;
	}
file.close();
return 0;
}
