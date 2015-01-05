#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,w,h,n,r,c,ans;
	cin>>t;
	char ch;
	while(t--)
	{
		cin>>h>>w>>n;
		char **A=new char*[h+1];
		for(int i=0;i<=h;i++)
		A[i]=new char[w];
		for(int i=1;i<=h;i++)
		for(int j=0;j<w;j++)
		cin>>A[i][j];
		c=0; r=0; ans=0;
		while(n--)
		{
			cin>>ch;
			if(ch=='R')
			{
				if(c<w-1)
				{
				if(A[r][c+1]!='S')
				c++;
				}
				else
				continue;
			}
			if(ch=='L')
			{
				if(c>0)
				{
				if(A[r][c-1]!='S')
				c--;
				}
				else
				continue;
			}
			if(ch=='D')
			{
				if(r<h)
				{
				if(A[r+1][c]!='S')
				r++;
				}
				else
				continue;
			}
			if(A[r][c]=='T')
			{
				ans++;
				A[r][c]='E';
			}
			for(int i=r+1;i<=h;i++)
			{
				if(A[i][c]=='E')
				r=i;
				else
				break;
			}
		}
		cout<<ans<<"\n";
	}
}
