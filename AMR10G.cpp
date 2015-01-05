# include<iostream>;
using namespace std;
void quickSort(long arr[], int left, int right)
 {
  int i = left, j = right;
  long tmp;
  long pivot = arr[(left + right) / 2];
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
int t;
cin>>t;
long *A;
int n,k;
long count=0,check=0;
for(int j=1;j<=t;j++)
{
cin>>n;
A=new long[n];
cin>>k;
for(int i=0;i<n;i++)
cin>>A[i];
int temp=0;
quickSort(A,0,n-1);
count=A[k-1]-A[0];
for(int i=1;i<n-k+1;i++)
{
	check=A[i+k-1]-A[i];
	if(check<count)
		count=check;
}
cout<<count<<"\n";
}
    cin.ignore();
    cin.get();
    return 0;
}
