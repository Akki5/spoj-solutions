#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,n,temp,a;
	cin>>t;
	double d;
	while(t--)
	{
		cin>>n;
		temp=n*8;
		d=(sqrt(1+temp)-1)/2;
		a=int(d);
		temp=(a*(a+1))/2;
		temp=n-temp;
		a++;
		if(temp==0)
		{
			a--;
			temp=a;
		}
		if(a%2==0)
		cout<<"TERM "<<n<<" IS "<<temp<<"/"<<a-temp+1<<"\n";
		else
		cout<<"TERM "<<n<<" IS "<<a-temp+1<<"/"<<temp<<"\n";
	}
}
