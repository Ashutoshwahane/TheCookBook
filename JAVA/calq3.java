import java.util.Scanner;
class calq3
{
	public static void main(String args[])
	{
		int a,b,c,ch;
		char s='y';
		Scanner obj=new Scanner(System.in);
		while(s=='y')
			{
				System.out.print("Enter the first Number = ");
				a=obj.nextInt();
				System.out.print("Enter the Second Number = ");
				b=obj.nextInt();
				System.out.println("select the operation to calculate");
				System.out.print("1) Addition  2) Subtraction  3) Multiplication  4) Division = ");
				ch=obj.nextInt();
				switch(ch)
				{
					case 1: 
							System.out.print("The Addition is = "+(a+b));
							break;
					case 2:
							System.out.print("The Subtraction is = "+(a-b));
							break;
					case 3:
							System.out.print("The Multiplication is = "+(a*b));
							break;
					case 4:
							System.out.print("The Division is = "+(a/b));
							break;
					default :
								System.out.print("plese Enter valid choice ");
								break;
				}
				System.out.print("\n\nDo you want to continue [Y/n] ");
				s=obj.next().charAt(0);
			}
			
					
	}
}

