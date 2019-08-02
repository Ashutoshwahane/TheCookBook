class ExceptDemo
{
	public static void  main(String args[])
	{
		try
		{
			int c = Calculate(9,0);
			System.out.print(c);
		}
		catch(Exception e)
		{
		System.out.print("Exception occuried : "+e.toString());
		e.printStackTrace();
		}
	}
	static int Calculate(int a, int b)
	{
		int c=a/b;
		return c;
	}
}
	
		
