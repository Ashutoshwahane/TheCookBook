class Box
{
	double volume(double width,double height,double depth)
	{	
		return(width*height*depth);
	}
}
class BoxDemo
{
	public static void main(String args[])
	{
		Box b= new Box();
		double vol=b.volume(5,6,7);
		System.out.print(vol);
	}
}
