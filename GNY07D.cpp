#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,r,c,x,y,a,b,i;
	cin>>n;
	char ch;
	int temp,t;
	for(int m=1;m<=n;m++)
	{
		cin>>r>>c;
		char **A=new char*[r];
		char *B=new char[r*c];
		for(i=0;i<r;i++)
		A[i]=new char[c];
		for(i=0;i<r;i++)
		for(int j=0;j<c;j++)
		cin>>A[i][j];
		a=r;b=c;t=0;x=0;y=0;
		while(t<a*b)
		{
			for(i=1;i<=c;i++)
			B[t++]=A[x][y++];
			y--;x++;
			for(i=1;i<r;i++)
			B[t++]=A[x++][y];
			x--;y--;
			for(i=1;i<c;i++)
			B[t++]=A[x][y--];
			y++;x--;
			for(i=1;i<=r-2;i++)
			B[t++]=A[x--][y];
			x++;y++;
			r-=2;
			c-=2;
		}
		cout<<m<<" ";
		for(i=0;i<(a*b)/5;i++)
		{
			t=4;temp=0;
			for(int j=5*i;j<5*(i+1);j++)
			{
				temp+=(pow(2,t--)*int(B[j]-48));
			}
			if(temp==0)
			cout<<" ";
			else{
			ch=temp+64;
			cout<<ch;}
		}
		cout<<"\n";
	}
}
