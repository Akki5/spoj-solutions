#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
	int t,n,count,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		long long *A=new long long[n];
		for(int i=0;i<n;i++)
		scanf("%llu",&A[i]);
		sort(A,A+n);
		count=0;temp=1;

		for(int i=0;i<n-1;i++)
		{
			if(A[i]==A[i+1])
			temp++;
			else
			{
				if(temp>count)
				count=temp;
				temp=1;

			}
		}
		if(temp>count)
				count=temp;
		n=n/2+1;
		if(count>=n||n==1)
		printf("0\n");
		else
		printf("%d\n",n-count);

	}
}



