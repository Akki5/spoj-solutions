# include<stdio.h>
using namespace std;
int main()
{
    int t,i,j,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
                     scanf("%d%d",&i,&j);
                     if(i==j)
                     {
                             if(i%2==0)
                             printf("%d\n",(i*2));
                             else
                             printf("%d\n",((i*2)-1));
                     }
                     else if((i-j)==2)
                     {
                             if(i%2==0)
                             printf("%d\n",(i+j));
                             else
                             printf("%d\n",((i+j)-1));
                     }
                     else
                     printf("No Number\n");
    }
    return 0;
}

