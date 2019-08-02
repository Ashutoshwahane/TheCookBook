import java.util.Scanner;
class vowel
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		String str;
		char ch;
		int vowels=0,consonant=0,i;
		System.out.print("Enter the String : ");
		str=s.nextLine();
		for(i=1;i<str.length();i++)
		{
			ch=str.charAt(i);
			if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			vowels ++;
			else
			consonant ++;
		}
		System.out.print("\nVovels in "+str+" is : "+vowels);
		System.out.print("\nConsonants in "+str+" is : "+consonant);
	}
}
