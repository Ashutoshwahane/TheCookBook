import java.util.Scanner;
class Areaoftriangle
{
	public static void main(String args[])
	{
		int height,b;
		double area;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter the Height of a Triangle  = ");
		height=s.nextInt();
		System.out.print("Enter the Base of a Triangle  = ");
		b=s.nextInt();
		area=0.5*b*height;
		System.out.print("The area of  Triangle  = "+area);
	}
}
		
