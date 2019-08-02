import java.util.Scanner;
class Star4
{
	public static void main(String args[])
	 {
		char r,c;
		for(r='A'; r<='G'; r++)
		{
			for(c='A'; c<=r; c++)
			{
				if(r%2!=0)
				{
					System.out.print(c+" ");
				}
			}
			System.out.print("\n");
        }
   

	}
}


