import java.util.Scanner;
class Cube
{
	public static void main(String args[])
	{
		int c,cube;
		
		Scanner s=new Scanner(System.in);
		System.out.print("Enter a number  = ");
		c=s.nextInt();
		
		cube=c*c*c;
		System.out.print("The cube of your number = "+cube);
	}
}
		
