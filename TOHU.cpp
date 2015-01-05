#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int t;
long long n;
double res=0.0;
cin>>t;
for(int i=1;i<=t;i++)
{
cin>>n;
res=0.75000000000-0.50000000000/((n+1)*(n+2));
cout<<fixed<<setprecision(11)<<res<<"\n";
}
cin.ignore();
cin.get();
return 0;
}
