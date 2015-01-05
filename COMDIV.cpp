#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}

int main() {
	int t,a,b,g,ans,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		g=gcd(a,b);
		ans=1;
		for(int i=2;i*i<=g;i++)
		{
			if(g%i==0)
			{
				c=1;
				while(g%i==0)
				{
					g/=i;
					c++;
				}
				ans*=c;
			}
		}
		if(g>1)
		ans*=2;
		printf("%d\n",ans);
	}
}
