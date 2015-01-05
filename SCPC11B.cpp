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
     int n,check=1,count;
     cin>>n;
     while(n!=0)
     {
                check=1;
             int *A=new int[n];
             for(int i=0;i<n;i++)
             cin>>A[i];
             quickSort(A,0,n-1);
             for(int i=0;i<n-1;i++)
             if((A[i+1]-A[i])>200)
             check=0;
             if(((1422-A[n-1])*2)>200)
             check=0;
             if(check==1)
             cout<<"POSSIBLE"<<"\n";
             else
             cout<<"IMPOSSIBLE"<<"\n";
             cin>>n;
     }
     cin.ignore();
     cin.get();
     return 0;
}

