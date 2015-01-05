#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int t;
	string s1,s2,s3,s;
	scanf("%d",&t);
	int a,b,c;
	while(t--)
	{
		cin>>s1>>s>>s2>>s>>s3;
		a=0;
		b=0;
		c=0;
		if(s1.find("machula")!=-1)
		{
			for(int i=0;i<s2.length();i++)
			a=(a*10)+(s2[i]-'0');
			for(int i=0;i<s3.length();i++)
			b=(b*10)+(s3[i]-'0');
			c=b-a;
			s1="";
			while(c!=0)
			{
				s1=(char)((c%10)+'0')+s1;
				c/=10;
			}
			cout<<s1<<" + "<<s2<<" = "<<s3<<"\n";
		}
		else if(s2.find("machula")!=-1)
		{
			for(int i=0;i<s1.length();i++)
			a=(a*10)+(s1[i]-'0');
			for(int i=0;i<s3.length();i++)
			b=(b*10)+(s3[i]-'0');
			c=b-a;
			s2="";
			while(c!=0)
			{
				s2=(char)((c%10)+'0')+s2;
				c/=10;
			}
			cout<<s1<<" + "<<s2<<" = "<<s3<<"\n";
		}
		else
		{
			for(int i=0;i<s2.length();i++)
			a=(a*10)+(s2[i]-'0');
			for(int i=0;i<s1.length();i++)
			b=(b*10)+(s1[i]-'0');
			c=b+a;
			s3="";
			while(c!=0)
			{
				s3=(char)((c%10)+'0')+s3;
				c/=10;
			}
			cout<<s1<<" + "<<s2<<" = "<<s3<<"\n";
		}
	}
}
