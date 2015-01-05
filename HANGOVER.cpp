# include<iostream>
using namespace std;
int main()
{
    double *A=new double[280];
    A[1]=0.5;
    for(int i=2;i<280;i++)
    A[i]=A[i-1]+(1.0/(i+1));
    double c;
    cin>>c;
    while(c!=0.00)
    {
                 for(int i=1;i<280;i++)
                 {
                 if(A[i]>c)
                 {
                           cout<<i<<" card(s)\n";
                           break;
                 }
                 }
                 cin>>c;
    }

    return 0;
}

