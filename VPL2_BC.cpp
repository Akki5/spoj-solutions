#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int t,n,m,k,x,y;
    scanf("%d",&t);
    for(int a=1;a<=t;a++)
    {
             scanf("%d %d %d",&n,&m,&k);
             int **A=new int*[n];
             for(int i=0;i<n;i++)
             A[i]=new int[m];
             for(int i=0;i<n;i++)
             for(int j=0;j<m;j++)
             A[i][j]=0;
             while(k--)
             {
                       scanf("%d %d",&x,&y);
                       A[x][y]=-10;
                       if(x-1>=0&&x+1<n)
                       {
                                A[x-1][y]++;
                                A[x+1][y]++;
                                if(y-1>=0)
                                {
                                          A[x-1][y-1]++;
                                          A[x][y-1]++;
                                          A[x+1][y-1]++;
                                }
                                if(y+1<m)
                                {
                                         A[x-1][y+1]++;
                                         A[x][y+1]++;
                                         A[x+1][y+1]++;
                                }
                       }
                       else if(x-1>=0)
                       {
                                A[x-1][y]++;
                                if(y-1>=0)
                                {
                                          A[x-1][y-1]++;
                                          A[x][y-1]++;
                                }
                                if(y+1<m)
                                {
                                         A[x-1][y+1]++;
                                         A[x][y+1]++;
                                }
                       }
                        else if(x+1<n)
                       {
                                A[x+1][y]++;
                                if(y-1>=0)
                                {
                                          A[x+1][y-1]++;
                                          A[x][y-1]++;
                                }
                                if(y+1<m)
                                {
                                         A[x+1][y+1]++;
                                         A[x][y+1]++;
                                }
                       }
                       else
                       {}
             }
             printf("Scenario #%d:\n",a);
             for(int i=0;i<n;i++)
            {
                     for(int j=0;j<m;j++)
                     {
                             if(A[i][j]<0)
                             printf("*");
                             else if(A[i][j]==0)
                             printf("-");
                             else
                             printf("%d",A[i][j]);
                     }
                     printf("\n");
            }

    }
}

