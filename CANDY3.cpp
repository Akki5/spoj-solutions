#include<iostream>
using namespace std;
int main()
{
 long long t,n,temp,count=0;
 cin>>t;
 for(long long j=1;j<=t;j++)
 {
         cin>>n;
         count=0;
         for(long long i=0;i<n;i++)
         {
                 cin>>temp;
                 count+=(temp%n);
         }
         if(count%n==0)
         cout<<"YES "<<"\n";
         else
         cout<<"NO "<<"\n";
 }
cin.ignore();
cin.get();
return 0;
}





