#include<iostream>
#include<cstdio>
using namespace std;

int main(){
int n,a;
scanf("%d",&n);
while(n!=0){
n++;
a=(n*(3*n-1))/2;
printf("%d\n",a);
scanf("%d",&n);
}
}
