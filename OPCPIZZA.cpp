#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
using namespace std;

bool bsearch(int *A,int beg,int last,int p)
{
     last--;
     int mid;
     while(beg<=last)
     {
                     mid=(beg+last)/2;
                     if(A[mid]<p)
                     beg=mid+1;
                     else if(p<A[mid])
                     last=mid-1;
                     else
                     {
                         return true;
                     }
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
    int t,n,m,count;
    scanf("%d",&t);
    while(t--)
    {
            scanf("%d %d",&n,&m);
            int *A=new int[n];
            count=0;
            for(int i=0;i<n;i++)
            {
                    scanf("%d",&A[i]);
            }
            quickSort(A,0,n-1);
            for(int i=0;i<n;i++)
            {

                    if(bsearch(A,i+1,n,m-A[i]))
                    {
                     count++;
                    }
            }
            printf("%d\n",count);
    }
}
