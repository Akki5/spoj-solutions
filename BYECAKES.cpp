#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
       int **A=new int*[3];
       int temp;
       for(int i=0;i<3;i++)
       A[i]=new int[4];
       for(scanf("%d",&A[0][0]);A[0][0]!=-1;scanf("%d",&A[0][0]))
       {
               scanf("%d%d%d%d%d%d%d",&A[0][1],&A[0][2],&A[0][3],&A[1][0],&A[1][1],&A[1][2],&A[1][3]);
               if(A[0][0]==0&&A[0][1]==0&&A[0][2]==0&&A[0][3]==0){
               printf("0 0 0 0\n");
               continue;}
               for(int i=0;i<4;i++)
               {
               A[2][i]=A[0][i]/A[1][i];
               if(A[0][i]%A[1][i]!=0)
               A[2][i]++;
               }
               temp=max(A[2][0],A[2][1]);
               temp=max(temp,A[2][2]);
               temp=max(temp,A[2][3]);
               if(temp==0)
               temp=1;
               for(int i=0;i<4;i++)
                       printf("%d ",(A[1][i]*temp)-A[0][i]);
                       printf("\n");
       }
    return 0;
}


