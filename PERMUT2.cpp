#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int n,f;
	scanf("%d",&n);
	while(n!=0)
	{
		int *A=new int[n+1];
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&A[i]);
		}
		f=1;
		for(int i=1;i<=n;i++)
		{
			if(A[A[i]]!=i)
			{
				f=0;
				break;
			}
		}
		if(f==1)
		printf("ambiguous\n");
		else
		printf("not ambiguous\n");
		scanf("%d",&n);
	}
}
