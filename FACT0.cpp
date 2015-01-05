#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int count;
	long long n;
	scanf("%llu",&n);
	while(n!=0)
	{
		for(long long i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				count=0;
				while(n%i==0)
				{
					n/=i;
					count++;
				}
				printf("%llu^%d ",i,count);
			}
		}
		if(n>1)
		printf("%llu^1 ",n);
		printf("\n");
		scanf("%llu",&n);
	}
}
