#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    long long int n=1,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=n%1000007;
        cout<<(((3*n*n)+n)/2)%1000007<<endl;
    }
}

