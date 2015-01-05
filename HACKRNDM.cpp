# include<iostream>
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
int n,k,s;
cin>>n>>k;
int *A=new int[n];
int count=0;
for(int l=0;l<n;l++)
cin>>A[l];
quickSort(A,0,n);
for(int i=0;i<n;i++)
{
       for(int j=i;j<n;j++)
       {
               s=A[j]-A[i];
               if(s==k){
               count++;
               break;
               }
               if(s>k)
               break;
       }
}
cout<<count;
    cin.ignore();
    cin.get();
    return 0;
}




