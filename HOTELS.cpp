#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
    long N,M,sum,maxi;
    long i,j;
    scanf("%ld",&N);
    scanf("%ld",&M);
    long arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%ld",&arr[i]);
    }
    maxi = 0;
    sum = 0;
    j = 0;
    int f=0;
    for(i=0;i<=N;i++)
    {
        sum = sum+arr[i];
        while(sum>M)
        {
            sum = sum-arr[j];
            j++;
        }
        if(sum == M)
        {
            f=1;
            break;
        }
        if(maxi<sum)
        maxi=sum;
    }
    if(f==1)
    printf("%ld",M);
    else
    printf("%ld",maxi);
}

