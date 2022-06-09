#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main()	{

ofstream file;
file.open("sin.dat");
for(double i=0;i<=7;i=i+.1)	{
file<< i <<" "<< sin(i)<<endl;
}
file.close();
return 0;
}

