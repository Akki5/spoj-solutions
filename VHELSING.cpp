#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int t,r;
	cin>>t;
	double ans,d=8.0*(2-sqrt(2.0));;
	for(int i=1;i<=t;i++)
	{
		cin>>r;
		ans=d*1.0*r*r*r;
		cout<<setprecision(4)<<fixed<<ans<<"\n";
	}
}

