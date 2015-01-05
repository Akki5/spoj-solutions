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
 int a,d,*B,*C;
 cin>>a>>d;
 while(a!=0)
 {
            B=new int[a];
            C=new int[d];
            for(int i=0;i<a;i++)
            cin>>B[i];
            for(int i=0;i<d;i++)
            cin>>C[i];
            quickSort(B,0,a-1);
            quickSort(C,0,d-1);
            if(B[0]>=C[0]&&B[0]>=C[1])
            cout<<"N"<<"\n";
            else
            cout<<"Y"<<"\n";
            cin>>a>>d;
 }
cin.ignore();
cin.get();
return 0;
}

