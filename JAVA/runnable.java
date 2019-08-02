class first implements Runnable 
{
	int i ;
	public void run()
	{
		for(i=1;i<11;i++)
		{
			System.out.println("first thread : "+i);
		}
	}
}
class second implements Runnable
{
	int i ;
	public void run()
	{
		for(i=1;i<11;i++)
		{
			System.out.println("second thread : "+i);
		}
	}
}
class third implements Runnable
{
	int i ;
	public void run()
	{
		for(i=1;i<11;i++)
		{
			System.out.println("third thread : "+i);
		}
	}
}
class runnable
{
	public static void main(String args[])
	{
		Thread t1=new Thread(new first());
		Thread t2=new Thread(new second());
		Thread t3=new Thread(new third());
		t1.start();
		t2.start();
		t3.start();
	}
}
