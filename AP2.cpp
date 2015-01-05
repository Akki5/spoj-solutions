# include<iostream>;
using namespace std;
int main()
{
int t;
cin>>t;
long long a,n,d,t3,tl3,s,b;
for(int j=1;j<=t;j++)
{
cin>>t3>>tl3>>s;
b=tl3-t3;
n=(s*2)/((2*t3)+b);
d=b/(n-5);
a=t3-(2*d);
cout<<n<<"\n";
cout<<a<<" ";
for(long long i=2;i<=n;i++)
{
a=a+d;
cout<<a<<" ";
}
}
    cin.ignore();
    cin.get();
    return 0;
}

