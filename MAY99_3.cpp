#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int recur(int a, int b, int c)
{
    if(c%b==0)
    return c/b;
    return (c-(a*recur(b,a%b,c)))/b;
}
int main()
{
    int t,a,b,c,x,y,g;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
            cin>>a>>b>>c;
            g=gcd(a,b);
            if(c%g!=0||(a<c&&b<c))
            cout<<"NO\n";
            else
			{
            a=a/g;
            b=b/g;
            c=c/g;
            if(a<b)
            {
            x=recur(b,a,c);
            y=(c-(a*x))/b;
            }
            else
            {
            y=recur(a,b,c);
            x=(c-(b*y))/a;
            }
            cout<<"YES\n";
        	}
    }
    return 0;
}
