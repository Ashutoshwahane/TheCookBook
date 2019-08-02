import java.util.Scanner;
class armstrong
{
	public static void main(String args[])
	{	
		int no,sum,temp,r;
		Scanner obj=new Scanner(System.in);
		System.out.print("Enter a number to check whether it is Armstrong or not = ");
		no=obj.nextInt();
		sum=0;
		temp=no;
		while(no>0)
		{
			r=no%10;
			sum=sum+(r*r*r);
			no=no/10;
		}
		if(temp==sum)
		System.out.println("its an armstrong number");
		else
		System.out.println("its not an armstrong number");
	}
}
