# include<stdio.h>
# include<math.h>
using namespace std;
int main()
{
    int n,res;
    double temp;
    scanf("%d",&n);
    while(n!=0)
    {
               temp=log(n)/log(2);
               res=int(temp);
               printf("%d\n",res);
               scanf("%d",&n);
    }
    return 0;
}
