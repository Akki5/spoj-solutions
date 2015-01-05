#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int w,d,a,b,ans;
	cin>>w>>d;
	while(w!=0)
	{
		int *A=new int[w];
		int *B=new int[d];
		ans=0;
		for(int i=0;i<w;i++)
		cin>>A[i];
		for(int i=0;i<d;i++)
		cin>>B[i];
		for(int i=0;i<w;i++)
		{
			for(int j=0;j<d;j++)
			{
				if(A[i]==B[j])
				{
					d--;
					for(int k=j;k<d;k++)
					B[k]=B[k+1];
					break;
				}
			}
		}
		for(int i=0;i<w;i++)
		ans+=A[i];
		for(int i=0;i<d;i++)
		ans+=B[i];
		cout<<ans<<"\n";
		cin>>w>>d;
	}
}
