#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int t,n;
	long long int ans;
	char s[100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int *A=new int[n];
		for(int i=0;i<n;i++)
		{
			scanf("%s",s);
			scanf("%d",&A[i]);
		}
		sort(A,A+n);
		ans=0;
		for(int i=0;i<n;i++)
		{
			ans+=abs((i+1)-A[i]);
		}
		printf("%llu\n",ans);
	}
}
