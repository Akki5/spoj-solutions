import java.math.BigInteger;
import java.util.*;
class JULKA
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
BigInteger a,b;
for(int i=1;i<=10;i++)
{
a=new BigInteger(ob.next());
b=new BigInteger(ob.next());
b=(a.add(b)).divide(new BigInteger("2"));
a=a.subtract(b);
System.out.println(b);
System.out.println(a);
}
}
}
