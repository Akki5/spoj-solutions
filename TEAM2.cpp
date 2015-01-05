##include<iostream>
using namespace std;
void quickSort(long long *arr, int left, int right)
 {
  int i = left, j = right;
  long long tmp;
  long long pivot = arr[(left + right) / 2];
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
    int t=1;
    long long n,res;
    long long *A=new long long[4];
    while(scanf("%llu",&A[0])==1)
    {
            for(int i=1;i<4;i++)
            scanf("%llu",&A[i]);
            quickSort(A,0,3);
            res=A[3]+A[2];
            printf("Case %d: %llu\n",t,res);
            t++;
    }
    return 0;
}


