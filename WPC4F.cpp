#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int recur(int **A,int i,int j)
{
	if(i==0)
	return min(A[i][(j+1)%3],A[i][(j+2)%3]);
	return min(recur(A,i-1,(j+1)%3)+A[i][(j+1)%3],recur(A,i-1,(j+2)%3)+A[i][(j+2)%3]);
}

int main() {
	int t,n,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int **A=new int*[n];
		for(int i=0;i<n;i++)
		{
			A[i]=new int[3];
			scanf("%d%d%d",&A[i][0],&A[i][1],&A[i][2]);
		}
		ans=min(recur(A,n-2,0)+A[n-1][0],recur(A,n-2,1)+A[n-1][1]);
		ans=min(ans,recur(A,n-2,2)+A[n-1][2]);
		printf("%d\n",ans);
	}
}
