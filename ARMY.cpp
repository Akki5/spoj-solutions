#include<iostream>
using namespace std;
int main()
{
    int t,n1,n2,a,m1=0,m2=0;
    cin>>t;
     for(int i=1;i<=t;i++)
     {
             m1=0;m2=0;
             cin>>n1>>n2;
             for(int j=1;j<=n1;j++)
             {
                     cin>>a;
                     if(a>m1)
                     m1=a;
             }
             for(int j=1;j<=n2;j++)
             {
                     cin>>a;
                     if(a>m2)
                     m2=a;
             }
             if(m2>m1)
             cout<<"MechaGodzilla"<<"\n";
             else
             cout<<"Godzilla"<<"\n";
     }
     cin.ignore();
     cin.get();
     return 0;
}

