#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n1,n2,i,j;
	long long ans,res1,res2;
	scanf("%d",&n1);
	while(n1!=0)
	{
		int *A=new int[n1];
		for(i=0;i<n1;i++) scanf("%d",&A[i]);
		scanf("%d",&n2);
		int *B=new int[n2];
		for(i=0;i<n2;i++) scanf("%d",&B[i]);
		i=0;
		j=0;
		res1=0;
		res2=0;
		ans=0;
		while(i<n1&&j<n2)
		{
			if(A[i]==B[j])
			{
				ans+=max(res1,res2)+A[i];
				res1=0;
				res2=0;
				i++;
				j++;
			}
			else if(A[i]<B[j])
			{
				res1+=A[i++];
			}
			else
			res2+=B[j++];
		}
		for(int k=i;k<n1;k++) res1+=A[k];
		for(int k=j;k<n2;k++) res2+=B[k];
		ans+=max(res1,res2);
		cout<<ans<<"\n";
		scanf("%d",&n1);
	}
}
