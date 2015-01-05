#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
#include <math.h>
using namespace std;

bool bsearch(int *A,int beg,int last,int p)
{
     int mid;
     while(beg<=last)
     {
             mid=(last+beg)/2;
             if(A[mid]<p)
             beg=mid+1;
             else if(A[mid]>p)
             last=mid-1;
             else
             return true;
     }
     return false;
}

void quickSort(int arr[], int left, int right)
 {
  int i = left, j = right;
  int tmp;
  int pivot = arr[(left + right) / 2];

  /* partition */
  while (i <= j) {
        while (arr[i] < pivot)
              i++;
        while (arr[j] > pivot)
              j--;
        if (i <= j) {
              tmp = arr[i];
              arr[i] = arr[j];
              arr[j] = tmp;
              i++;
              j--;
    }
}
/* recursion */
if (left < j)
    quickSort(arr, left, j);
if (i < right)
        quickSort(arr, i, right);
}

int main()
{
    int t,n,x;
    long long ans;
    scanf("%d",&t);
    int C[1005];
    for(int k=1;k<=t;k++)
    {
              scanf("%d %d",&x,&n);
              int *A=new int[n];
              for(int i=0;i<1005;i++)
              C[i]=0;
              for(int i=0;i<n;i++)
              {
                      scanf("%d",&A[i]);
                      C[A[i]]++;
              }
              ans=0;
              for(int i=0;i<n;i++)
              {
                      if((x-A[i])<1005&&(x-A[i])>=0)
                      {
                                                    if(C[x-A[i]]>0)
                                                    ans+=C[x-A[i]];
                                                    if(x==A[i]*2)
                                                    ans--;
                      }
              }
              printf("%d. %llu\n",k,ans/2);
    }

}
