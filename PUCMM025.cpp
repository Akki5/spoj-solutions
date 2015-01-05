#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int t,n,a,b,c,count;
	char s[250];
	while(scanf("%s",s)!=EOF)
	{
		n=strlen(s);
		int *res=new int[10];
		for(int i=1;i<=9;i++)
		res[i]=0;

		if(n==1)
		a=s[0]-'0';
		else if(n==2)
		a=(s[0]-'0')*10+(s[1]-'0');
		else
		a=(s[n-3]-'0')*100+(s[n-2]-'0')*10+(s[n-1]-'0');

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

		if((s[n-1]-'0')%2==0)
		res[2]=1;
		if((s[n-1]-'0')==0||(s[n-1]-'0')==5)
		res[5]=1;
		if(b%3==0)
		res[3]=1;
		if(res[3]==1&&res[2]==1)
		res[6]=1;
		if(a%4==0)
		res[4]=1;
		if(a%8==0)
		res[8]=1;
		if(b%9==0)
		res[9]=1;
		if(c%7==0)
		res[7]=1;

		count=0;
		for(int i=0;i<n;i++)
		{
			if((s[i]-'0')==1)
			count++;
			else if((s[i]-'0')==0)
			continue;
			else
			{
				if(res[(s[i]-'0')]==1)
				count++;
			}
		}
		printf("%d\n",count);
	}
}
