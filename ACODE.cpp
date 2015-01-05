#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

long long recur(long long *A,char *s,int i)
{
	if(i==1)
	{
		A[1]=0;
		if(s[1]!='0')
		A[1]=A[0];
		if((s[0]=='1')||(s[0]=='2'&&s[1]<'7'))
		A[1]+=1;
	}
	if(A[i]==-1)
	{
		A[i]=0;
		if(s[i]!='0')
		A[i]=recur(A,s,i-1);
		if((s[i-1]=='1')||(s[i-1]=='2'&&s[i]<'7'))
		A[i]+=recur(A,s,i-2);
	}
	return A[i];
}

int main() {
	char s[5001];
	scanf("%s",s);
	int n;
	while(s[0]!='0')
	{
		n=strlen(s);
		long long *A=new long long[n];
		A[0]=1;
		for(int i=1;i<n;i++)
		A[i]=-1;
		printf("%llu\n",recur(A,s,n-1));
		scanf("%s",s);
	}
}
