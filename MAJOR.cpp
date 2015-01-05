#include<stdio.h>
using namespace std;
void quickSort(int arr[], int left, int right)
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
    int t,n,*A;
    int count,i,k,check=0;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
            scanf("%d",&n);
            check=0;
            A=new int[n];
            for(i=0;i<n;i++)
            scanf("%d",&A[i]);
            quickSort(A,0,n-1);
            for(i=0;i<n;i=k)
            {
                           count=1;
                    for(k=i+1;k<n;k++)
                    {
                    if(A[i]==A[k])
                    count++;
                    else
                    break;
                    }
                     if(count>(n/2))
                     {
                                    printf("%s %d\n","YES",A[i]);
                                     check=1;
                                     break;
                     }
            }
            if(check==0)
            printf("%s\n","NO");
    }
return 0;
}

