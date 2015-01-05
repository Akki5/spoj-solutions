#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	long long n;
	scanf("%llu",&n);
	if(n%10==0)
	printf("2\n");
	else
	printf("1\n%d\n",(n%10));
}
