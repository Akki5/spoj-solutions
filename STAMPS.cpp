# include<stdio.h>
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
    int t,stm,n,temp,count;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
         scanf("%d%d",&stm,&n);
         int *A=new int[n];
         temp=0;
         count=0;
         for(int i=0;i<n;i++)
         scanf("%d",&A[i]);
         quickSort(A,0,n-1);
         for(int i=n-1;i>=0;i--)
         {
                temp+=A[i];
                if(temp>=stm)
                {
                    count=n-i;
                    break;
                }
         }
         if(count>0)
         printf("Scenario #%d:\n%d\n\n",k,count);
         else
         printf("Scenario #%d:\nimpossible\n\n",k);
    }
    return 0;
}



