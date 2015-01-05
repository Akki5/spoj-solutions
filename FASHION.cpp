#include<iostream>
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
 int t,n,*A,*B,count=0;
 cin>>t;
 for(int i=1;i<=t;i++)
 {
         cin>>n;
         count=0;
         A=new int[n];
         B=new int[n];
         for(int i=0;i<n;i++)
         cin>>A[i];
         for(int i=0;i<n;i++)
         cin>>B[i];
         quickSort(A,0,n-1);
         quickSort(B,0,n-1);
         for(int i=0;i<n;i++)
         count+=A[i]*B[i];
         cout<<count<<"\n";
 }
cin.ignore();
cin.get();
return 0;
}
