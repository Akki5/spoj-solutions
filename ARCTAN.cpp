#include<iostream>
#include<math.h>
using namespace std;
int main(){
int t;
long long a,i;
cin>>t;
while(t--){
cin>>a;
i=(long long)sqrt(1.0*(a*a+1));
while((a*a+1)%i)i--;
cout<<(2*a+i+(a*a+1)/i)<<"\n";
}}
