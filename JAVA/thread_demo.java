class first extends Thread
{
	int i;
	public void run()
	{
		for(i=1; i<=10;i++)
			System.out.println("thread 1 :"+i);
	}
}

class second extends Thread
{
	int i;
	public void run()
	{
		for(i=1; i<=10;i++)
			System.out.println("thread 2 :"+i);
	}
}

class third extends Thread
{
	int i;
	public void run()
	{
		for(i=1; i<=10;i++)
			System.out.println("thread 3 :"+i);
	}
}
class thread_demo
{
	public static void main(String args[])
	{
		first t1=new first();
	    second t2=new second();
		third t3=new third();
		t1.start();
		t2.start();
		t3.start();
	}
}


