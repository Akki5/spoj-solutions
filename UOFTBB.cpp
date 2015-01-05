#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,l,n,c,r,d,m,h,i,check,pos;
	cin>>t;
	while(t--)
	{
		cin>>l>>n;
		int *A=new int[l];
		for(i=0;i<l;i++)
		A[i]=0;
		while(n--)
		{
			cin>>c>>r>>d;
			for(i=max(0,c-r-1);i<=min(l-1,c+r-1);i++)
			A[i]+=d;
		}
		cin>>m;
		while(m--)
		{
			cin>>h;
			check=0;
			for(i=0;i<l;i++)
			{
				h-=A[i];
				if(h<=0)
				{
					check=1;
					pos=i+1;
					break;
				}
			}
			if(check==0)
			cout<<"Bloon leakage\n";
			else
			cout<<pos<<"\n";
		}
	}
}
