#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t;
	long long n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu",&n);
		if(n%2==1)
		{
			n/=2;
			printf("%llu\n",n);
		}
		else
		{
			n/=2;
			if(n%2==0)
			n--;
			else
			n-=2;
			printf("%llu\n",n);
		}
	}
}
