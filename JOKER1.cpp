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
int t,n,check=0;
long long ans;
cin>>t;
while(t--){
cin>>n;
int *A=new int[n];
for(int i=0;i<n;i++)
cin>>A[i];
quickSort(A,0,n-1);
ans=1;check=0;
for(int i=1;i<n;i++)
{
A[i]-=i;
if(A[i]<1)
check=1;
}
if(check==1)
{
	cout<<"0\n";
	continue;
}
for(int i=0;i<n;i++)
ans=(ans*A[i])%1000000007;
cout<<ans%1000000007<<"\n";
}
cout<<"KILL BATMAN\n";
}
