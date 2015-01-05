#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int pos(int n,int k)
{
    if(n==1)
    return 0;
    return (pos(n-1,k+1)+k)%n;

}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
          scanf("%d",&n);
          printf("%d\n",pos(n,1)+1);
    }
}

