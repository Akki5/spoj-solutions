#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int t,f1,f2,a,n,b,c;
	char s[50001];
	string res[]={"No","Yes"};
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		n=strlen(s);
		f1=0;
		f2=0;
		if(n>=3)
		{
			a=(s[n-2]-'0')*10+(s[n-1]-'0');
			b=0;
			c=0;
			for(int i=0;i<n;i++)
			{
				b+=(s[i]-'0');
				if(i%6==0)
				c+=(s[n-i-1]-'0');
				else if(i%6==1)
				c+=(s[n-i-1]-'0')*3;
				else if(i%6==2)
				c+=(s[n-i-1]-'0')*2;
				else if(i%6==3)
				c+=(s[n-i-1]-'0')*6;
				else if(i%6==4)
				c+=(s[n-i-1]-'0')*4;
				else
				c+=(s[n-i-1]-'0')*5;
			}
			if(a%4==0&&b%9==0&&c%7==0)
			f1=1;
			if(a%25==0&&b%3==0&&c%7==0)
			f2=1;
		}
		cout<<res[f1]<<" "<<res[f2]<<"\n";
	}
}
