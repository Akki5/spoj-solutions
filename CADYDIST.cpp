#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
void quickSort(long long arr[], int left, int right)
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
	int n;
	scanf("%d",&n);
	long long int ans;
	while(n!=0)
	{
		long long int *C=new long long int[n];
		long long int *P=new long long int[n];
		for(int i=0;i<n;i++)
		scanf("%lld",&C[i]);
		for(int i=0;i<n;i++)
		scanf("%lld",&P[i]);
		quickSort(C,0,n-1);
		quickSort(P,0,n-1);
		ans=0;
		for(int i=0;i<n;i++)
		ans+=C[i]*P[n-i-1];
		printf("%lld\n",ans);
		scanf("%d",&n);
	}
}


