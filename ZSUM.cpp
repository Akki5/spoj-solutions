#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
long long power(long long n,long long p)
{
	if(p==0)return 1;
	if(p==1)return n;
	if(p%2==0)
	return power((n*n)%10000007,p/2);
	else
	return (n*power((n*n)%10000007,(p-1)/2))%10000007;
}
int main()
{
	long long k,n,s1,s,p1,p;
	cin>>n>>k;
	while(n!=0)
	{
		s=(2*power(n-1,k)+power(n,k))%10000007;
		p=(2*power(n-1,n-1)+power(n,n))%10000007;
		s+=p;
		cout<<s%10000007<<"\n";
		cin>>n>>k;
	}
}
