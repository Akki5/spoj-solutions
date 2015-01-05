#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t,n,sum,f,a;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		f=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			sum+=a;
			f=f^a;
		}
		if(sum==n)
		{
			if(f==1)
			printf("Brother\n");
			else
			printf("John\n");
		}
		else
		{
			if(f==0)
			printf("Brother\n");
			else
			printf("John\n");
		}
	}
}
