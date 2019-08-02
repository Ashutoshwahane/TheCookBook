class first implements Runnable
{
	int i;
	public void run()
	{
		for(i=1;i<=30;i=i+2)
		{
		System.out.println("First odd number : "+i);
		}
	}
}
class Second implements Runnable
{
	int i;
	public void run()
	{
		for(i=2;i<=30;i=i+2)
		{
		System.out.println("Second even number : "+i);
		}
	}
}
class third implements Runnable
{
	int i,f1=1,f2=1,f3;
	public void run()
	{
		System.out.println("third fibo :"+f1);
		System.out.println("third fibo :"+f2);
		for(i=1;i<=10;i++)
		{
			f3=f2+f1;
			System.out.println("third fibo :"+f3);
			f1=f2;
			f2=f3;
		}
	}
}


class runnable_thread
{
	public static void main(String args[])
	{
		
		Thread t1=new Thread(new first());
		Thread t2=new Thread(new Second());
		Thread t3=new Thread(new third());
	t1.start();
	t2.start();
	t3.start();
	}
}

