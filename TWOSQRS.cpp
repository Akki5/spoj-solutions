#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a; cin>>a;
	while(a--) {
		long long n; cin>>n;
		bool ans=false;
		long long t=sqrt(n), c=n-t*t;
		if(c==0){
			ans=true;
			goto x;
		}
		if((long long)(sqrt(c))*(long long)(sqrt(c))-c==0) ans=true;
		while(!ans && sqrt(c)<t) {
			t--;
			c=n-t*t;
			if((long long)(sqrt(c))*(long long)(sqrt(c))-c==0) ans=true;
		}
		x:
			if(ans) cout<<"Yes\n";
			else cout<<"No\n";
	}
	return 0;
}

