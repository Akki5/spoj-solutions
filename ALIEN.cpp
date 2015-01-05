#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t,n,m,front,rear,sum,max,dif;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		int *A=new int[n];
		front=0;rear=0;
		sum=0;max=0;
		dif=0;
		for(int i=0;i<n;i++)
		{
                scanf("%d",&A[rear]);
                sum+=A[rear++];
                while(sum>m)
                {
                         sum-=A[front++];
                }
                if(rear-front>dif)
                {
                                  dif=rear-front;
                                  max=sum;
                }
                if(rear-front>=dif)
                {
                                   if(sum<max)
                                   max=sum;
                }
        }
        printf("%d %d\n",max,dif);
	}
}
