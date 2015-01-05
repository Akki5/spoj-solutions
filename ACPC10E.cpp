#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
long long temp,b,c,t,g,a,d;
cin>>g>>t>>a>>d;
while(g!=-1)
{
	temp=(t*(t-1)/2)*g;
	c=1;
	b=g*a+d;
	while(c<b)
	c=c*2;
	temp+=c-1;
	c=c-b;
	cout<<g<<"*"<<a<<"/"<<t<<"+"<<d<<"="<<temp<<"+"<<c<<"\n";
	cin>>g>>t>>a>>d;
}
}
