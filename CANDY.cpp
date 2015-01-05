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
int n;
cin>>n;
int *A;
int sum=0,count=0;
while(n!=-1)
{
sum=0;
count=0;
A=new int[n];
for(int i=0;i<n;i++)
{
        cin>>A[i];
        sum+=A[i];
}
quickSort(A,0,n-1);
if((sum%n)!=0)
cout<<-1<<"\n";
else
{
    sum=sum/n;
    for(int i=0;i<n;i++)
    if(A[i]<sum)
    count+=(sum-A[i]);
    cout<<count<<"\n";
}
cin>>n;
}
    cin.ignore();
    cin.get();
    return 0;
}



