import java.util.*;
class ACPC11B
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
int t=ob.nextInt();
int A[],B[],n1,n2,count=0,check=0;
for(int k=1;k<=t;k++)
{
n1=ob.nextInt();
A=new int[n1];
for(int i=0;i<n1;i++)
A[i]=ob.nextInt();
n2=ob.nextInt();
B=new int[n2];
for(int i=0;i<n2;i++)
B[i]=ob.nextInt();
count=A[0]-B[0];
if(count<0)
count*=-1;
for(int i=0;i<n1;i++)
for(int j=0;j<n2;j++)
{
	check=A[i]-B[j];
	if(check<0)
		check*=-1;
	if(check<count)
		count=check;
}
System.out.println(count);
}
}
}
