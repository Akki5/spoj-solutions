#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long r[n], R[n], p=0;
		for(int i=0;i<n;i++) cin>>r[i]>>R[i];
		long long m=0, M=0;
		for(int i= 0;i<n;i++)
		if(m<r[i])
		{
			m=r[i];
			p=i;
		}
		for(int i= 0;i<n;i++)
		if(M<R[i] && i!=p) M=R[i];
		bool con=true;
		if(M>=m) con=false;
		if(con) cout<<p+1<<endl;
		else cout<<"-1\n";
	}
	return 0;
}

