#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int n1,n2;
    string s;
    while(cin>>s)
    {
                 n1=0,n2=0;
                 for(int i=0;i<s.length();i++)
                 {
                         if((i%2==0&&s.at(i)<91)||(i%2!=0&&s.at(i)>96))
                         n1++;
                         else
                         n2++;
                 }
                 printf("%d\n",min(n1,n2));
    }

}
