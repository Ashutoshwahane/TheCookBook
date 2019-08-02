import java.util.Scanner;
class Char_Accept
{
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a Number : ");
		int n = s.nextInt();
		System.out.print("Enter a Character : ");
		char c = s.next().charAt(0);
		System.out.print("\nGiven Number is : "+n);
		System.out.print("\nGiven Character is : "+c);
	}
}
