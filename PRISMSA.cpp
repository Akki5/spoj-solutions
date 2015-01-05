#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int t,v;
	double a;
	cin>>t;
	while(t--)
	{
		cin>>v;
		a=pow((double)(4.000*v),(double)2/3);
		a=a*1.5*1.73205080757;
		cout<<setprecision(10)<<fixed<<a<<"\n";
	}
}

