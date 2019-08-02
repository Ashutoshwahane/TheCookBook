import java.util.Scanner;
class strch
{
	public static void main(String args[])
	{
		char name[]=new char[30];
		int count=0,space=0,i,j;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter a Sentence = ");
		for(i=0; i<30; i++)
		{
			name[i]=s.next().charAt(0);
		}
		System.out.print("given string is = "+name);
	
	}
}

