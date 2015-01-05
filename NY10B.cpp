#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t,p,b,x,y,j,s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&p,&b,&x,&y);
		j=1;
		s=0;
		while(x||y)
		{
			s+=((x%b+y%b)%b)*j;
			x/=b;
			y/=b;
			j*=b;
		}
		printf("%d %d\n",p,s);
	}
}
