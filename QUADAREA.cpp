#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	double a,b,c,d;
	for(int m=1;m<=t;m++)
	{
		cin>>a>>b>>c>>d;
		a=(a+b+c-d)*(a+b+d-c)*(a+c+d-b)*(b+c+d-a);
		a=sqrt(a);
		a=a/4.0;
		cout<<setprecision(2)<<fixed<<a<<"\n";
	}
}
