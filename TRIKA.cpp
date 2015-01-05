#include <iostream>
#include <cstdio>
using namespace std;

int recur(int **A,int **B,int x,int y,int a,int b)
{
	if(x==a&&y==b)
	return 0;
	if(B[a][b]==-1)
	{
		if(a==x)
		B[a][b]=recur(A,B,x,y,a,b-1);
		else if(b==y)
		B[a][b]=recur(A,B,x,y,a-1,b);
		else
		B[a][b]=min(recur(A,B,x,y,a,b-1),recur(A,B,x,y,a-1,b));
		B[a][b]+=A[a][b];
	}
	return B[a][b];
}

int main() {
	int n,m,x,y;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int **A=new int*[n+1];
	int **B=new int*[n+1];
	for(int i=1;i<=n;i++)
	{
		A[i]=new int[m+1];
		B[i]=new int[m+1];
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&A[i][j]);
			B[i][j]=-1;
		}
	}
		int min=recur(A,B,x,y,n,m);
		if(min>A[x][y])
		printf("N\n");
		else
		printf("Y %d\n",A[x][y]-min);
}
