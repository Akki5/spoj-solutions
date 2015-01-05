#include<stdio.h>
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	long long int n,ans;
	while(scanf("%lld",&n)!=EOF)
	{
		ans=(n/9)*81+(n%9)*(n%9);
		cout<<ans<<"\n";
	}
}
