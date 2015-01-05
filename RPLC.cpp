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
	int n;
	long long temp,count,a;
	for(int m=1;m<=t;m++)
	{
		cin>>n;
		count=1;
		temp=0;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			temp+=a;
			if(temp<0)
			{
				count+=(temp*-1);
				temp=0;
			}
		}
		cout<<"Scenario #"<<m<<": "<<count<<"\n";
	}
}
