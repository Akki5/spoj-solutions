#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int n,m,t,k,min,pos;
	char s[51];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&n,&m,&k);
		int *A=new int[n];
		min=m+1;
		for(int i=0;i<n;i++)
		{
			A[i]=0;
			scanf("%s",s);
			for(int j=0;j<m;j++)
			{
				if(s[j]=='*')
				A[i]++;
			}
		}
		while(k>0)
		{
			for(int i=0;i<n;i++)
			{
				if(A[i]<min)
				{
					min=A[i];
					pos=i;
				}
			}
			if(min>=(m+1)/2)
			{
				if(k%2==1)
				A[pos]=m-A[pos];
				break;
			}
			A[pos]=m-A[pos];
			min=m+1;
			k--;
		}
		for(int i=1;i<n;i++)
		A[0]+=A[i];
		printf("%d\n",A[0]);
	}
}
