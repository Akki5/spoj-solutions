#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
  int n,p,ind,count=0;
  string s1,s2,*s=new string[9];
  s[1]="TTT";s[2]="TTH";s[3]="THT";s[4]="THH";s[5]="HTT";s[6]="HTH";s[7]="HHT";s[8]="HHH";
  cin>>p;
  for(int i=1;i<=p;i++)
  {
          cin>>n;
          cin>>s1;
          cout<<n;
          for(int j=1;j<=8;j++)
          {
                  count=0;
                  s2=s1;
                  while(s2.length()>=3)
                  {
                              ind=s2.find(s[j]);
                              if(ind==-1)
                              break;
                              s2=s2.substr(ind+1);
                              count++;
                  }
                  cout<<" "<<count;
          }
          cout<<"\n";
  }
cin.ignore();
cin.get();
return 0;
}

