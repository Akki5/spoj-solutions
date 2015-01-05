#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main()
{
    int t,r,v;
    double res;
    double p=2*acos(0.0);
    long long *A=new long long[4];
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
            scanf("%d%d",&r,&v);
            res=(r*9.806)/(v*v);
            if(res>1.0)
            cout<<"Scenario #"<<i<<": -1\n\n";
            else{
            res=asin(res)*90/p;
            if(res>=0&&res<=45)
            cout<<"Scenario #"<<i<<": "<<setprecision(4)<<res<<"\n\n";
            else
            cout<<"Scenario #"<<i<<": -1\n\n";
            }
    }
    return 0;
}

