#include<iostream>
using namespace std;
int main()
{
	int n,d,s,c;
		cin>>n>>d;
		while(n!=0)
		{
			s=0;
			c=2;
			while(c<=n)
			{
				s=(s+d)%c;
				c++;
			}
			cout<<n<<" "<<d<<" "<<s+1<<"\n";
			cin>>n>>d;
		}
}
