#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int t,n,ans;
	char s[31];
	int *A=new int[30];
	A[0]=1;
	for(int i=1;i<30;i++) A[i]=A[i-1]*2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		n=strlen(s);
		int count=0;
		ans=1;
		for(int i=1;i<n;i++)
		{
			if(s[i]==s[i-1])
			count++;
			else
			{
				ans*=A[count];
				count=0;
			}
		}
		ans*=A[count];
		printf("%d\n",ans);
	}
}
