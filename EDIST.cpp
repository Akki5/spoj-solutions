#include <iostream>
#include <cstdio>
#include <cstring>
#include <math.h>
using namespace std;

int lev(char *s1,char *s2,int i,int j,int **A)
{
	if(i==-1||j==-1)
	return max(i,j)+1;

	if(A[i][j]!=-1)
	return A[i][j];

	int a=0;
	if(s1[i]!=s2[j])
	a=1;
	int b;
	if((lev(s1,s2,i-1,j,A)+1)<=(lev(s1,s2,i,j-1,A)+1))
	b=(lev(s1,s2,i-1,j,A)+1);
	else
	b=(lev(s1,s2,i,j-1,A)+1);
	if(b>(lev(s1,s2,i-1,j-1,A)+a))
	b=(lev(s1,s2,i-1,j-1,A)+a);
	A[i][j]=b;
	return A[i][j];
}

int main() {
	int t;
	char s1[2001],s2[2001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s1);
		scanf("%s",s2);
		int n1=strlen(s1);
		int n2=strlen(s2);
		int **A=new int*[n1];
		for(int i=0;i<n1;i++)
		{
			A[i]=new int[n2];
			for(int j=0;j<n2;j++)
			A[i][j]=-1;
		}
		int ans=lev(s1,s2,n1-1,n2-1,A);
		printf("%d\n",ans);
	}
}
