#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int n,ans;
	scanf("%d",&n);
	while(n!=0)
	{
		ans=0;
		int *A=new int[n+1];
		for(int i=1;i<=n;i++)
		scanf("%d",&A[i]);
		int a=(n+1)/2;
		for(int i=0;i<a;i++)
		ans+=A[n-i];
		printf("%d\n",ans);
		scanf("%d",&n);
	}
}
