#include<iostream>
using namespace std;
int main()
{
       int t,n,m;
       scanf("%d",&t);
       for(int i=1;i<=t;i++)
       {
               scanf("%d%d",&n,&m);
               if(n<=m)
               {
                       if(n%2==0)
                       printf("L\n");
                       else
                       printf("R\n");
               }
               else
               {
                    if(m%2==0)
                    printf("U\n");
                    else
                    printf("D\n");
               }
       }
    return 0;
}


