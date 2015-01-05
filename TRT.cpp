#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
int res[2000][2000];
long long int recur(int *A,int front,int rear,int n)
{
	if(res[front][rear]!=-1)
	return res[front][rear];
	if(front==rear)
	return A[front]*n;
	res[front][rear]=max(recur(A,front+1,rear,n+1)+A[front]*n,recur(A,front,rear-1,n+1)+A[rear]*n);
	return res[front][rear];
}
int main()
{
	int n;
	scanf("%d",&n);
	int *A=new int[n];
	for(int i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            res[i][j]=-1;
	int ans=recur(A,0,n-1,1);
	printf("%d",ans);
}

