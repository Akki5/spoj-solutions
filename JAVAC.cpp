#include<iostream>
# include<string>
#include <stdio.h>
using namespace std;
int main()
{
    int t=0,check=1;
    string s,r="";
    char c[101];
    while(scanf("%s",c)!= EOF)
    {
                s=c;
               check=1;
               t=0;
               r="";
               if(s.at(0)<91||s.at(0)=='_')
               {
                                      cout<<"Error!\n";
                                      check=0;
                }
                else{
                     r+=s.at(0);
               for(int i=1;i<s.length();i++)
               {
                       char ch=s.at(i);
                       if(ch<91&&t==2)
                       {
                                      cout<<"Error!\n";
                                      check=0;break;
                       }
                       else if(ch=='_'&&t==1)
                       {
                                      cout<<"Error!\n";
                                      check=0;break;
                       }
                       else if(ch<91)
                       {
                            ch=ch+32;
                            r=r+"_";
                            r+=ch;
                            t=1;
                       }
                       else if(ch=='_')
                       {
                            if((i+1)>=s.length())
                            {
                                      cout<<"Error!\n";
                                      check=0; break;
                            }
                            else if((s.at(i+1))<91||(s.at(i+1)=='_'))
                            {
                                      cout<<"Error!\n";
                                      check=0; break;
                            }
                            else{
                           r+=(s.at(i+1)-32);
                           i++;
                           t=2;
                           }
                       }
                       else
                       r+=ch;
               }
               }
               if(check==1)
               cout<<r<<"\n";

    }

cin.ignore();
cin.get();
return 0;
}

