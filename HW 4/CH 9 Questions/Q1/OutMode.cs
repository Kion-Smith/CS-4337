using System;
					
public class Program
{
	public static void Main()
	{
	
		int a = 15;
		int b = 20;
		
		Console.WriteLine("Before:"+a+" "+b);
		int startTime = DateTime.Now.Millisecond;
		
		outMode(out a, out b);
		
		Console.WriteLine("After:"+a+" "+b);
		int endTime = DateTime.Now.Millisecond;
		Console.WriteLine("Time taken: "+ (startTime - endTime));
		
		
	}
	
	public static void outMode(out int x, out int y) 
	{
		
		x = 15*2;
		y = 20*2;
		
	}
}