#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
#include <math.h>
using namespace std;

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
    int t,n,ans;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              int *A=new int[n];
              for(int i=0;i<n;i++)
              scanf("%d",&A[i]);
              ans=0;
              quickSort(A,0,n-1);
              for(int i=0;i<n;i++)
              {
                      if(A[i]==-1)
                      {
                                  continue;
                      }
                      for(int j=i+1;j<n&&A[j]<=2*A[i];j++)
                      {
                              if(A[i]*2==A[j])
                              {
                                             ans++;
                                             A[j]=-1;
                                             break;
                              }
                      }
              }
              printf("%d\n",ans);
    }

}

