import java.util.*;
class BYTESE2
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
int t=ob.nextInt();
int n,A[][],max=0,temp=0,count=0;
for(int k=1;k<=t;k++)
{
temp=0;
n=ob.nextInt();
A=new int[n][2];
for(int i=0;i<n;i++)
{
A[i][0]=ob.nextInt();
A[i][1]=ob.nextInt();
if(A[i][1]>max)
max=A[i][1];
}
for(int i=1;i<max;i++)
{
count=0;
for(int j=0;j<n;j++)
if(i>=A[j][0]&&i<A[j][1])
count++;
if(temp<count)
temp=count;
}
System.out.println(temp);
}
}}



