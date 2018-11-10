using System;
					
public class Program
{
	public static void Main()
	{
		//vars are like auto in c++
		//base is like super in java
		//gotos are the same as in other langs
		//learned other syntax things
	
		Console.WriteLine("Enter your name");
		
		String name = Console.ReadLine();
		Console.WriteLine("Enter your Age");
		int age = Int32.Parse(Console.ReadLine());
		
		if(checkAge(age))
		{
			Console.WriteLine("Wow in "+ doCalc(age)+ "  you will be as old as I was on this day " + name );
		}
		else
		{
			Console.WriteLine("Wow you are old");
		}	
	
		
	}
	
	public static bool checkAge(int num)
	{
		return ((2018 - num) > 1998);
	}
	
	public static int doCalc(int num)
	{
		return ( (2018-1998) + (2018 - num));
	}
	
}