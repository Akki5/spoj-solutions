#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n,k,a,b;
	scanf("%d%d",&n,&k);
	int *A=new int[n+1];
	for(int i=1;i<=n;i++)
	A[i]=0;
	while(k--)
	{
		scanf("%d%d",&a,&b);
		A[a]++;
		if(b<n)
		A[b+1]--;
	}
	for(int i=2;i<=n;i++)
	{
		A[i]+=A[i-1];
	}
	sort(A+1,A+(n+1));
	printf("%d\n",A[(n+1)/2]);
}
