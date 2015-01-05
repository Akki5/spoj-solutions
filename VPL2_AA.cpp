#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int t,a,b,c,d;
	cin>>t;
	double ans;
	for(int i=1;i<=t;i++)
	{
		cin>>a>>b>>c>>d;
		ans=(c*1.0*log((double)d/a))/log((double)b/a);
		cout<<"Scenario #"<<i<<": "<<setprecision(2)<<fixed<<ans<<"\n";
	}
}
