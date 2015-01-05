#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main()
{
int t,n;
cin>>t;
double d;
while(t--){
cin>>n;
d=(1.0*n)/(n+1);
cout<< setprecision(8) << fixed<<d<<"\n";
}
}
