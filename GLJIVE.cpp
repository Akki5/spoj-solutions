#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,sum1=0,sum2=0,check=0;
    int *A=new int[10];
  	for(i=0;i<10;i++)
  	{
  		cin>>A[i];
  	}
  	for(i=0;i<10;i++)
  	{
  		sum2+=A[i];
  		if(sum2>=100)
  		{
  			if((100-sum1)>=(sum2-100))
  			cout<<sum2;
  			else
  			cout<<sum1;
  			check=1;
  			break;
  		}
  		sum1+=A[i];
  	}
  	if(check==0)
  	cout<<sum1;
    return 0;
}
