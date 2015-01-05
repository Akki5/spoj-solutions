#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int t,pos,j;
 	string s;
 	scanf("%d",&t);
 	while(t--)
 	{
 		cin>>s;
 		pos=0;
 		char *A=new char[s.length()];
 		for(int i=0;i<s.length();i++)
 		{
 			char ch=s.at(i);
 			if(ch==')')
 			{
 				for(j=pos-1;j>=0;j--)
 				{
 					if(A[j]=='(')
 					break;
 					cout<<A[j];
 				}
 				pos=j;
 			}
 			else if(ch>96&&ch<123)
 			cout<<ch;
 			else
 			{
 				A[pos]=ch;
 				pos++;
 			}
 		}
 		cout<<"\n";
 	}
}
