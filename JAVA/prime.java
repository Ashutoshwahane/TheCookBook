import java.util.Scanner;

class prime
{	
	public static void main(String args[])
	{
		int p,i,flag=0;
		Scanner obj=new Scanner(System.in);
		System.out.print("Enter the no check prime no = ");
		p=obj.nextInt();
		for (i=2; i<p;i++)
		{
			if(p%i==0)
			{
				flag=1;
				break;
			}					
		}
		if(flag==1)
		{
			System.out.println(p+"is not a prime no");
		}
		else
			System.out.println(p+" = is a prime no");
	}
}


		
