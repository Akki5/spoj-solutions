#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,t;
 	long long r,a;
 	scanf("%d",&t);
 	while(t--)
 	{
 		scanf("%d",&n);
 		if(n%2==0)
 		a=n-2;
 		else
 		a=n-1;
 		a/=2;
 		r=a*a;
 		cout<<r%n<<"\n";
 	}
}
