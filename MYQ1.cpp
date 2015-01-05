#include<stdio.h>
using namespace std;
int main ()
{
    int n,t,t1,t2;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
            scanf("%d",&n);
            if(n==1)
            {
                    printf("%s\n","poor conductor");
                    continue;
            }
            t1=n%10;
            t2=n/10;
            if(t1>1&&t1<7)
            printf("%d ",(t2*2+1));
            else if(t1>6)
            printf("%d ",((t2+1)*2));
            else
            printf("%d ",(t2*2));
            if(t1==1||t1==2||t1==6||t1==7)
            printf("%s ","W");
            else if(t1==5||t1==8)
            printf("%s ","M");
            else
            printf("%s ","A");
            if(t1<4)
            printf("%s\n","L");
            else
            printf("%s\n","R");
    }
return 0;
}
