#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t,n,f;
	long long s1,s2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%2==1)
		{
			for(int i=0;i<n;i++)
			scanf("%d",&f);
			printf("YES\n");
		}
		else
		{
			s1=0;
			s2=0;
			for(int i=0;i<n;i++)
			{
				scanf("%d",&f);
				if(i%2==0)
				s1+=f;
				else
				s2+=f;
			}
			if(s1==s2)
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
}
