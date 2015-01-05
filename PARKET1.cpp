#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	long long r,b,a,c,l,w;
	cin>>r>>b;
	a=r+4;
	c=(r+b)*16;
	c=sqrt((a*a)-c);
	l=(a+c)/4;
	w=(a-c)/4;
	cout<<l<<" "<<w;
}
