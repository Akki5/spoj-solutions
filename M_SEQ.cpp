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
	long long n,b;
	double a;
	cin>>t;
	while(t--)
	{
		cin>>n;
		b=4*n*(n+1)+1;
		a=sqrt(b);
		a=a/n;
		cout<<setprecision(8)<<fixed<<a<<"\n";
	}
}
