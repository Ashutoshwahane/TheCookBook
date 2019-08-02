
import java.util.Scanner;
class Q1
{
	public static void mian(String args[])
		{
			int a,b;
		Scanner obj=new Scanner(System.in);
		System.out.print("Enter the first Number = ");
		a=obj.nextInt();
		System.out.print("Enter the Second Number = ");
		b=obj.nextInt();
		if(a>b)
		System.out.print(a+ " the first Number is greater than Second Number " +b);
		else
		System.out.print(b+ " the Second Number is greater than First Number " +a);
		}
}
		
