#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,check,j;
	cin>>t;
	char *A=new char[100];
	char ch;
	while(t--)
	{
		for(int i=1;i<100;i++)
		cin>>j>>A[i];
		ch=A[9];
		check=0;
		for(int i=18;i<82;i+=9)
		{
			if(A[i]!=ch)
			{
				check=1;
				break;
			}
		}
		if(check==0)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
