import java.util.Scanner;
class AreaofRectangle
{
	public static void main(String args[])
	{
		int l,b,area;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter the length of a Rectangle  = ");
		l=s.nextInt();
		System.out.print("Enter the Breath of a Rectangle  = ");
		b=s.nextInt();
		area=l*b;
		System.out.print("The area of  Rectangle  = "+area);
	}
}
		

