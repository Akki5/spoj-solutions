#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    int p,ans=0;
    scanf("%d",&n);
    while(n--)
    {
          scanf("%d",&p);
             ans^=p;
    }
    printf("%d",ans);

}
