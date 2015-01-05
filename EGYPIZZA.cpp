#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,a=0,b=0,c=0,p=0,count=0;
    double num,den,res=0.0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cin>>s;
            if(s=="1/4")
            a++;
            else if(s=="1/2")
            b++;
            else
            c++;
    }
    count=b/2;
    b=b%2;
         if(a>=c)
         {
                 count+=c;
                 a=a-c;
                 count++;
                       if(b>0)
                          a=a-2;
                          else
                          a=a-4;
                          if(a>0){
                     count+=a/4;
                     if(a%4!=0)
                     count++;
                 }
         }
         else
         {
             count+=c+b;
         }
         count++;
    cout<<count<<"\n";
    cin.ignore();
    cin.get();
     return 0;
}

