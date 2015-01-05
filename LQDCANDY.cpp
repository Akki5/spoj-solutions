#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int t,s;
 	long long int n,c;
 	string b;
 	scanf("%d",&t);
 	double d;
 	while(t--)
 	{
 		scanf("%lld",&n);
 		b="";
 		d=log2(n);
 		if(d-int(d)==0.0)
 		{
 			cout<<n<<" 0\n";
 			continue;
 		}
 		while(n!=0)
 		{
 			b=char(n%2+48)+b;
 			n/=2;
 		}
 		s=ceil(d);
 		//s=(long long)pow((double)2,c);
 		for(int i=b.length()-1;i>=0;i--)
 		{
 			if(b.at(i)=='1')
 			{
 				c=i+1;
 				break;
 			}
 		}
 		cout<<(long long int)pow(2,s)<<" "<<c<<"\n";
 	}
}
