#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
int M[2000][2000];
int knapsack(int value[], int weight[], int C, int n)
{
  for(int i = 1; i <= C; i++){
    for(int j = 0; j <n; j++){
      if(j > 0){
        M[j][i] = M[j-1][i];
        if (weight[j] <= i)
          M[j][i] = max(M[j][i], M[j-1][i-weight[j]]+value[j]);
      }
      else{
        M[j][i] = 0;
        if(weight[j] <= i)
          M[j][i] = max(M[j][i], value[j]);
      }
    }
  }
  return M[n-1][C];
}

int main()
{
	int n,k,m,ans;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&k,&m);
		int *A=new int[m];
		int *B=new int[m];
		for(int i=0;i<m;i++)
		scanf("%d %d",&A[i],&B[i]);
		ans=knapsack(B,A,k,m);
		cout<<"Hey stupid robber, you can get "<<ans<<".\n";
	}
}

