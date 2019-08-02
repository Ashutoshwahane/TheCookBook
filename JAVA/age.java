import java.util.Scanner;
class age
{
	public static void main(String args[])
	{
		int a;
		Scanner obj=new Scanner(System.in);
		System.out.print("Enter your age : ");
		 a=obj.nextInt();
		try
		{
			if(a<60)
			{
			throw new Exception();
			}
			else
			System.out.print("you are valid user");

		}
		catch(Exception e)
		{
			System.out.println("error age Exception"+e);
		}
	}
}
