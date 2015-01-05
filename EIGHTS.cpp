#include<iostream>
using namespace std;
int main()
{
 int t;
 long long a,k;
 cin>>t;
 for(int i=1;i<=t;i++)
 {
         cin>>k;
         a=(k-1)*250+192;
         cout<<a<<"\n";
 }
cin.ignore();
cin.get();
return 0;
}
