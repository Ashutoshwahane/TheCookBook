import java.util.Scanner;
class Star1
{
	public static void main(String args[]) {
	
		int r,c,n;
	Scanner in=new Scanner(System.in);
	System.out.print("Enter the charactor you want to print = ");
	n=in.nextInt();
	for(r=1; r<=n; r++) {
	for(c=1; c<=r; c++) {
	System.out.print(+c);
	}
	System.out.print("\n");
       }
    }
}

