#include <iostream>
#include <cstdio>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
	int t,max,count,f,pos;
	string s;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		getline(cin,s);
		int *A=new int[26];
		for(int i=0;i<26;i++)
		A[i]=0;
		for(int i=0;i<s.length();i++)
		{
			if(s.at(i)!=' ')
			A[(s.at(i)-'A')]++;
		}
		max=A[0];count=1;pos=0;
		for(int i=1;i<26;i++)
		{
			if(A[i]>max)
			{
				max=A[i];
				count=1;
				pos=i;
				continue;
			}
			if(A[i]==max)
			count++;
		}
		if(count>1)
		printf("NOT POSSIBLE");
		else
		{
			pos=pos-4;
			if(pos<0)
			{
				pos+=26;
			}
			printf("%d ",pos);
			for(int i=0;i<s.length();i++)
			{
				if(s.at(i)==' ')
				printf(" ");
				else
				{
					f=(s.at(i)-'A')-pos;
					if(f<0)
					f+=26;
					cout<<(char)('A'+f);
				}
			}
		}
		printf("\n");
	}
}
