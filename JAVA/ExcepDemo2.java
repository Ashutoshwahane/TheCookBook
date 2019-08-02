class ExcepDemo2
{
	public static void main(String args[])
	{
		try
		{
			String num="5";
			int numValue=Integer.parseInt(num);
			System.out.print("The Square is : "+numValue*numValue);
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.print("No Arguments given! "+e);

		}
		catch(NumberFormatException e)
		{
					System.out.print("Not a Number! "+e);
		}
	}
}
