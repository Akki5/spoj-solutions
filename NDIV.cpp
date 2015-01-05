#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a,b,n,s=0,k;
	int check[32000],prime[100000];
	for(int i=2;i<=32000;i++)
	check[i]=0;
	for(int i=2;i<=32000;i++)
	{
		if(check[i]==0)
		{
			prime[s]=i;s++;
			for(int j=i*i;j<=32000;j+=i)
			check[j]=1;
		}
	}
	scanf("%d%d%d",&a,&b,&n);
	prime[0]=2;
	int ans,temp,c,res=0;
	for(int i=a;i<=b;i++)
	{
		ans=1;
		c=i;
		k=0;
		for(int j=prime[k];j*j<=c;j=prime[++k])
		{
			temp=1;
			if(c%j==0)
			{
				while(c%j==0)
				{
					c=c/j;
					temp++;
				}
			}
			ans*=temp;
		}
		if(c>1)
		ans*=2;
		if(ans==n)
		res++;
	}
	printf("%d\n",res);
}
