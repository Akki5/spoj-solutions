
#include<iostream>
using namespace std;
int main ()
{
   int a,b,p,q;
   cin>>a>>b;
   while(a!=-1)
   {
   	if(a<b)
   	{
   	a=a+b;
   	b=a-b;
   	a=a-b;
   	}
   	if(b==0)
   	cout<<a<<"\n";
   	else if(a%(b+1)==0)
   	cout<<a/(b+1)<<"\n";
   	else
   	cout<<(a/(b+1)+1)<<"\n";
   	cin>>a>>b;
   }
    cin.ignore();
    cin.get();
return 0;
}
