#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,k;
	long long a,n,temp,b;
	scanf("%d",&t);
	while(t--)
	{
		cin>>n>>k;
		long long *A=new long long[k];
		a=1+(8*n);
		a=(sqrt(a)-1)/2;
		a=a/k;
		temp=(a*k*(a*k+1))/2;b=temp;
		for(int i=0;i<k;i++)
		{
			A[i]=((a-1)*a*k)/2+a*(i+1);
		}
		for(int i=0;i<k;i++)
		{
			temp+=a*k+(i+1);
			if(temp>n)
			{
				A[i]+=n-b;
				break;
			}
			A[i]+=a*k+(i+1);
			b=temp;

		}
		for(int i=0;i<k;i++)
		cout<<A[i]<<" ";
		cout<<"\n";
	}
}


