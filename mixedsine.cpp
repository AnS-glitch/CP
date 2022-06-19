#include<iostream>
#include<cmath>
#include<fstream>
#define pi 3.141592654
using namespace std;



int main() {
double f1,f2;
cin>>f1>>f2;

ofstream file;
file.open("wave.dat");
for(double i=-10; i<=10; i=i+.001){
file<<i<<" "<<sin(2*pi*f1*i)<<" "<<sin(2*pi*f2*i)<<" "<<sin(2*pi*f1*i)+sin(2*pi*f2*i)<<endl;
}
file.close();
return 0;
}
