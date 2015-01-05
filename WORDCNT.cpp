#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int t,prev,len,max,temp,f;
    string s;
    scanf("%d",&t);
    getline(cin,s);
    while(t--)
    {
              getline(cin,s);
              if(s.length()==0)
              continue;
              s=s+" ";
             max=0;temp=1;len=0;prev=0;
             f=0;
             for(int i=0;i<s.length();i++)
             {
                     if(s.at(i)<=' ')
                     {
                                   if(len==0)
                                   continue;
                                 if(prev==len)
                                 {
                                              temp++;
                                 }
                                 else
                                 {
                                     if(temp>max)
                                     max=temp;
                                     temp=1;
                                     prev=len;
                                 }
                                 len=0;
                     }
                     else
                     {
                         f=1;
                         len++;
                         }
             }
             if(temp>max)
             max=temp;
             if(f==0)
             printf("0\n");
             else
          printf("%d\n",max);
    }
}

