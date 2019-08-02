import java.util.Scanner;
class ad
{
	public static void main(String args[])
	{	int i,big;
		int num[]=new int[11];
		Scanner s=new Scanner(System.in);
		System.out.print("Enter 11 numbers = ");
		for(i=0; i<11; i++)
		{
			num[i]=s.nextInt();
		}
		big=num[i];
		for(i=0; i<11; i++)
		{
			if(big<num[i])
			{
				big=num[i];
			}
			
		}
		for(i=0; i<11; i++)
		{
			System.out.print("The biggest number is = "+big);
		}
		
	}
}
