#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	int n,k,t,f,temp;
	cin>>temp;
	while(temp--)
	{
		cin>>n>>k>>t>>f;
		t=((f-n)/(k-1))*k+n;
		cout<<t<<"\n";
	}
}
