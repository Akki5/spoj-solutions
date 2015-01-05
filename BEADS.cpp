#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,a;
    string s,s1,s2;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
            cin>>s;
            a=0;
            s1=s;
            for(int j=1;j<s.length();j++)
            {
               s2=s.substr(j)+s.substr(0,j);
               for(int k=0;k<s.length();k++)
               {
                       if(s2.at(k)<s1.at(k))
                       {
                                            s1=s2;
                                            a=j;
                                            break;
                       }
                       if(s2.at(k)>s1.at(k))
                       break;
               }
            }
            a++;
            cout<<a<<"\n";
      }
    cin.ignore();
    cin.get();
    return 0;
}

