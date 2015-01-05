#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<map>
using namespace std;
map<int ,bool>mp;
int main()
{   int t,n,sum=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
            scanf("%d",&n);

            if(mp[n-1]==true && mp[n+1]==true)
            sum-=1;
            else if(mp[n-1]==false && mp[n+1]==false)
            sum+=1;

            mp[n]=true;
            printf("%d\n",sum);
            }

           printf("Justice\n");



    return 0;
}
