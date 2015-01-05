#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	char s1[1001],s2[1001];
	int n1,n2,a;
	while(scanf("%s\n%s",s1,s2)!=EOF)
	{
		n1=strlen(s1);
		n2=strlen(s2);
		char *ch=new char[min(n1,n2)];
		a=0;
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)
			{
				if(s1[i]==s2[j])
				{
					ch[a++]=s1[i];
					n2--;
					for(int k=j;k<n2;k++)
					s2[k]=s2[k+1];
					break;
				}
			}
		}
		sort(ch,ch+a);
		for(int i=0;i<a;i++)
		cout<<ch[i];
		printf("\n");
	}
}
