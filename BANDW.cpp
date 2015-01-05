#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int a,count;
	string s,t;
	cin>>s>>t;
	char c1,c2;
	while(s!="*")
	{
		a=0;
		count=0;
		for(int i=0;i<s.length();i++)
		{
			c1=s.at(i);
			c2=t.at(i);
			if(c1!=c2)
			{
				if(a==0)
				{
					count++;
					a=1;
				}
			}
			else
			{
				if(a==1)
				a=0;
			}
		}
		cout<<count<<"\n";
		cin>>s>>t;
	}
}

