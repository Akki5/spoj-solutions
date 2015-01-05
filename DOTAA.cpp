#include<iostream>
#include<cstdio>
using namespace std;
void quickSort(int *arr, int left, int right)
 {
  int i = left, j = right;
  int tmp;
  int pivot = arr[(left + right) / 2];
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
if (left < j)
    quickSort(arr, left, j);
if (i < right)
        quickSort(arr, i, right);
}
int main()
{
    int t,n,m,d,i,check;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
          scanf("%d%d%d",&n,&m,&d);
          int *A=new int[n];
          for(i=0;i<n;i++)
            scanf("%d",&A[i]);
          quickSort(A,0,n-1);
          i=1;
          while(i<=m)
          {
                     check=0;
                     for(int j=n-1;j>0;j--)
                     {
                             if(A[j]>d)
                             {
                                       A[j]-=d;
                                       check=1;
                                       break;
                             }
                     }
                     if(check==0)
                     {
                                 printf("NO\n");
                                 break;
                     }
                     i++;
          }
          if(check==1)
          printf("YES\n");
    }
    return 0;
}


