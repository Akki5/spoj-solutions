#include<stdio.h>
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int n,k,a=1;
	long long int ans,temp;
	scanf("%d",&n);
	while(n!=-1)
	{
		int *C=new int[n+1];
		for(int i=n;i>=0;i--)
		scanf("%d",&C[i]);
		scanf("%d",&k);
		int *X=new int[k];
		for(int i=0;i<k;i++)
		scanf("%d",&X[i]);
		cout<<"Case "<<a<<":\n";
		for(int i=0;i<k;i++)
		{
		ans=C[0]+(X[i]*C[1]);
		temp=X[i];
		for(int j=2;j<=n;j++)
		{
			temp*=X[i];
			ans+=(temp*C[j]);
		}
		cout<<ans<<"\n";
		}
		a++;
		scanf("%d",&n);
	}
}


