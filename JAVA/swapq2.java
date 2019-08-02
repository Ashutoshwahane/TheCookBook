import java.util.Scanner;
class swapq2
{
	public static void main(String[] args)
		{
			int a,b;
			char ans;
			Scanner obj=new Scanner(System.in);
			do
			{
				System.out.print("Enter the first Number = ");
				a=obj.nextInt();
				System.out.print("Enter the Second Number = ");
				b=obj.nextInt();
				System.out.print(a+" = the first Number & the Second Number = "+b);
				a=a+b;
				b=a-b;
				a=a-b;
				System.out.println("After Swapping");
				System.out.println(" a becomes "+a+" and b becomes "+b);
				System.out.println("\n\nContinue : ");
				ans = obj.next().charAt(0);
			}while(ans =='y');
		}
}
		

