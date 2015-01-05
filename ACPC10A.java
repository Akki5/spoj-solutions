import java.util.*;
class ACPC10A
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
int A[]=new int[3];
 A[0]=ob.nextInt();
 A[1]=ob.nextInt();
 A[2]=ob.nextInt();
while(A[0]!=0||A[1]!=0||A[2]!=0)
{
if((A[2]-A[1])==(A[1]-A[0]))
System.out.println("AP "+(A[2]+A[2]-A[1]));
else
System.out.println("GP "+(A[2]*A[2]/A[1]));
 A[0]=ob.nextInt();
 A[1]=ob.nextInt();
 A[2]=ob.nextInt();
}
}
}


