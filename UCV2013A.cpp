#include<iostream>
#include<cstdio>
using namespace std;

 long long recur(int n,int r)
{
 long long res=1;
 long long cur=n;
 while(r)
{
 if(r%2) res=(res*cur)%1000000007;
 r/=2;
 cur=(cur*cur)%1000000007;
}
 return res;
}

int main()
{
  int n,l;
 long long ans;
  scanf("%d%d",&n,&l);
  while(n!=0)
{
 ans=(n*(recur(n,l)-1))%1000000007;
 ans=(ans*recur(n-1,1000000005))%1000000007;
 printf("%llu\n",ans);
 scanf("%d%d",&n,&l);
}
}
