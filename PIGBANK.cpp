#include <iostream>
#include <cstdio>
#include <cmath>
#define INF 9999999
#define MAX1 600
#define MAX2 10050
int dp[MAX1][MAX2];
#define DEBUG
using namespace std;
int main()
{
	int T;
	scanf ("%d",&T);
	while (T--)
	{
		int E,F;
		int N;
		scanf ("%d%d",&E,&F);
		scanf ("%d",&N);
		int W = F - E;
		//int keep[N + 1][W + 1];
		int w[N + 1],v[N + 1];
		for (int i = 1; i <= N; i++)
		{
			scanf ("%d%d",&v[i],&w[i]);

		}
		for (int i = 1; i <= N; i++)
			dp[i][0] = 0;
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= W; j++)
			{
				if (i == 1 and j < w[i])
				{
					dp[i][j] = INF;
					//keep[i][j] = 0;
				}
				else if (i == 1)
				{
					dp[i][j] = v[i] + dp[i][j - w[i]];
					//keep[i][j] = 1;
				}
				else if (j < w[i])
				{
					dp[i][j] = dp[i - 1][j];
					//keep[i][j] = 0;
				}
				else
				{
					dp[i][j] = min(dp[i - 1][j],v[i] + dp[i][j - w[i]]);
					//keep[i][j] = 1;
				}
			}
		}
		if (dp[N][W] >= INF)
		{
			printf ("This is impossible.\n");
		}
		else
		{
			printf ("The minimum amount of money in the piggy-bank is %d.\n",dp[N][W]);
		}



	}
	return 0;
}
