import java.util.Scanner;
class palimdrome
{	
	public static void main(String args[])
	{
		int n,i,sum=0,temp,m;
		Scanner obj=new Scanner(System.in);
		System.out.print("Enter a no to check palimdrome = ");
		n=obj.nextInt();
		temp=n;
		while(n>0)
		{
			i=n%10;
			sum=sum*10+i;
			n=n/10;
		}
				System.out.println("the reverse no is "+sum);

		
		if(temp==sum)
		System.out.print("the number is palimdrone");
		else
		System.out.println("the number is not palimdrone");
	}
}

		
