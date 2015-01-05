import java.util.*;
import java.math.*;
class CRAZYSK
{
static BigInteger recur(BigInteger x,BigInteger n)
{
if(x==n)
return new BigInteger("1");
if(x.compareTo(n)==-1)
return new BigInteger("0");
return x.divide(n).add(recur(x.divide(n).add(x.mod(n)),n));
}

public static void main(String arg[])throws Exception
{
Scanner ob=new Scanner(System.in);
int t=ob.nextInt();
BigInteger x,n,r;
for(int i=1;i<=t;i++)
{
x=new BigInteger(ob.next());
n=new BigInteger(ob.next());
r=x.add(recur(x,n));
System.out.println(r);
}
}
}
