import java.io.*;

class BRRead
{
   public static void main(String args[])throws IOException
   {
        char c;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter Characters... press 'q' to quit.....");
        do
        {
	c = (char)br.read();
	System.out.print(c);
        }while(c != 'q');
   }
}