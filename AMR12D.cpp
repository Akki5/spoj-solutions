#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	string s1,s2;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>s1; s2="";
		for(int j=s1.length()-1;j>=0;j--)
		{
			s2+=s1.at(j);
		}
		if(s1==s2)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
