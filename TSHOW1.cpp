#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int t;
    long long int num,temp,n,i,j,ans,k,rem;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&num);
        temp=0,n=0;
        //calculating the value of n(length)
        while(temp<num)
        {
            n=n+1;
            temp=pow(2,n+1)-2;
            //printf("%lld ",temp);
        }
        temp=pow(2,n)-2;
        //printf("%lld %lld\n",n,temp);
        ans=num-temp-1;
        char str[100000];
        int k=-1;
        //converting the number in binary representation
        while(ans>0)
        {
            rem=ans%2;
            k=k+1;
            str[k]=rem+'0';
            ans=ans/2;
        }
        j=n-k-1;
        for(i=1;i<=j;i++)
            printf("5");
        //print 5 inplace of '0' and print 6 in place of '1'
        for(i=k;i>=0;i--){
            if(str[i]=='0')
                printf("5");
            else
                printf("6");
        }
        printf("\n");
    }
    return 0;
}
