#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int t,n,a,b,c,d,e;
	long long f;
	char s[100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		long long *A=new long long[n];
		a=0;b=0;c=0;d=0;e=0;
		for(int i=0;i<n;i++)
		{
			scanf("%llu",&f);
			if(f==1) a++;
			else if(f==2) b++;
			else if(f==3) c++;
			else{ A[e++]=f; d=1;}
		}
		sort(A,A+e);
		for(int i=1;i<=a;i++)
		printf("1 ");
		for(int i=e-1;i>=0;i--)
		printf("%llu ",A[i]);
		if(d==0)
		{
			for(int i=1;i<=b;i++)
			printf("2 ");
			for(int i=1;i<=c;i++)
			printf("3 ");
		}
		else
		{
			for(int i=1;i<=c;i++)
			printf("3 ");
			for(int i=1;i<=b;i++)
			printf("2 ");
		}
		printf("\n");
	}
}
