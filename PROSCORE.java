import java.util.*;
class PROSCORE
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
int t=ob.nextInt();
int n,p,A[][],i=0,j=0,k=0,check=1,count=0,ans=0;
String s="";
for(k=1;k<=t;k++)
{
ans=0;
s="";
n=ob.nextInt();
p=ob.nextInt();
A=new int[n+1][p+1];
for(i=1;i<=n;i++)
for(j=1;j<=p;j++)
A[i][j]=ob.nextInt();
for(j=1;j<=p;j++)
{
check=0;
for(i=1;i<=n;i++)
if(A[i][j]==1)
{check=1;
break;
}
if(check==0)
{
s=s+"0";
break;
}
}
if(check==1)
s=s+"1";
check=1;
for(i=1;i<=n;i++)
{
count=0;
for(j=1;j<=p;j++)
if(A[i][j]==1)
count++;
if(count<1)
{
s=s+"0";
check=0;
break;
}
}
if(check==1)
s=s+"1";
check=1;
for(i=1;i<=n;i++)
{
count=0;
for(j=1;j<=p;j++)
if(A[i][j]==1)
count++;
if(count>=p)
{
s=s+"0";
check=0;
break;
}
}
if(check==1)
s=s+"1";
for(i=s.length()-1;i>=0;i--)
if((s.charAt(i)-48)==1)
ans=ans+(int)Math.pow(2,(s.length()-1-i));
System.out.println("Case "+k+": "+ans);
}
}
}
