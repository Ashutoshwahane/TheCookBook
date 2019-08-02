import java.util.Scanner;
class Areaofcircle
{
	public static void main(String args[])
	{
		int r;
		double pi=22/7,area;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter the radius of Circle  = ");
		r=s.nextInt();
		area=r*r;
		System.out.print("The area of  Circle  = "+area);
	}
}
		
