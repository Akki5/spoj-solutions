#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int t,n,m,count;
    scanf("%d",&t);
    int B[16]={1,1,1,4,6,19,43,120,307,866,2336,6588,18373,52119,147700,422016};
    for(int i=1;i<=t;i++)
    {
            scanf("%d",&m);
            printf("Case #%d: %d\n",i,B[m-1]);

    }
}
