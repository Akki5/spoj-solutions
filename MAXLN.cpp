#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  long long r;
  for(int i=1;i<=t;i++)
  {
          cin>>r;
          r=r*r*4;
          cout<<"Case "<<i<<": "<<r<<".25\n";
  }
cin.ignore();
cin.get();
return 0;
}
