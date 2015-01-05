#include<iostream>
#include <math.h>
using namespace std;
int main()
{
     long double n;
     cin>>n;
     long double res1=log2l(n);
     long int res2=res1;
     if(res2==res1)
     cout<<"TAK"<<"\n";
     else
     cout<<"NIE"<<"\n";
     cin.ignore();
     cin.get();
     return 0;
}
