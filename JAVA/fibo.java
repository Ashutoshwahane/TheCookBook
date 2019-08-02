import java.util.Scanner;
class fibo
{	
	public static void main(String args[])
	{
		int i,f1=0,f2=1,f3,n;
		Scanner obj= new Scanner(System.in);
		System.out.print("Enter a Numer");
		n=obj.nextInt();
		for(i=0; i<=n; i++)
		{
			System.out.println(f1);
			f3=f1+f2;
			f1=f2;
			f2=f3;
		}
	
	}
}
