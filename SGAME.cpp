#include <iostream>
#include <math.h>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
 int t,n,x,y,max;
 int *A=new int[301];
 bool f;
 scanf("%d",&t);
 while(t--)
 {
            scanf("%d",&n);
            memset(A,0,301);
            max=0;
            scanf("%d %d",&x,&y);
            while(x!=-1)
            {
                        if(x>max)
                        max=x;
                        if(y>max)
                        max=y;
                        A[x]++;
                        A[y]++;
                        scanf("%d %d",&x,&y);
            }
            f=true;
            for(int i=0;i<max;i++)
            {
                    if(A[i]==0)
                    continue;
                    if(A[i]%2!=0)
                    {
                                 f=false;
                                 break;
                    }
            }
            if(f)
            printf("YES\n");
            else
            printf("NO\n");
 }
}

