import java.util.*;
import java.math.BigInteger;
class FCTRL2
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
BigInteger A[]=new BigInteger[101];
A[1]=new BigInteger("1");
for(int i=2;i<101;i++)
{
BigInteger temp=new BigInteger(""+i);
A[i]=A[i-1].multiply(temp);
}
int t=ob.nextInt();
for(int i=1;i<=t;i++)
{
int n=ob.nextInt();
System.out.println(A[n]);
}
}
}
