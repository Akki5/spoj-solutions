#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,n,m,a,b,c,ans,x,check;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ans=0;x=0;
		int *B=new int[n*m];
		int **A=new int*[n];
		for(int i=0;i<n;i++)
		A[i]=new int[m];
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		cin>>A[i][j];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(A[i][j]==-1)
				continue;
				a=0;b=0;c=0;
				check=0;
				for(int k=0;k<x;k++)
				{
					if(A[i][j]==B[k])
					{
					check=1;break;}
				}
				if(check==1)
				continue;
				if(j>0)
				{
					a=A[i][j-1];
					if(j<m-1)
					b=A[i][j+1];
				}
				if(j==0&&j<m-1)
				b=A[i][j+1];
				if(A[i][j]==a||A[i][j]==b)
				{
					ans++;
					B[x++]=A[i][j];
					continue;
				}

				if(i!=0)
				{
					b=A[i-1][j];
					if(j>0)
					a=A[i-1][j-1];
					if(j<m-1)
					c=A[i-1][j+1];
				}
				if(A[i][j]==a||A[i][j]==b||A[i][j]==c)
				{
					ans++;
					B[x++]=A[i][j];
					continue;
				}

				if(i!=n-1)
				{
					b=A[i+1][j];
					if(j>0)
					a=A[i+1][j-1];
					if(j<m-1)
					c=A[i+1][j+1];
				}
				if(A[i][j]==a||A[i][j]==b||A[i][j]==c)
				{
					ans++;
					B[x++]=A[i][j];
				}

			}
		}
		cout<<ans<<"\n";
	}
}
