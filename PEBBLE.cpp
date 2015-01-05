#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	string s;
	char c,ch;
	int count,a=1,b;
	while(cin>>s)
	{
	count=0;c='1';
	for(int i=0;i<s.length();i++)
	{
		ch=s.at(i);
		if(c==ch)
		{
			count++;
			if(c=='1')
			c='0';
			else
			c='1';
		}
	}
	cout<<"Game #"<<a<<": "<<count<<"\n";
	a++;
	}
}
