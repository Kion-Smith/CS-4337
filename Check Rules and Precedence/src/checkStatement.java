import java.util.Scanner;

public class checkStatement
{
	public static void main(String [] args)
	{
		System.out.println("Enter a statement and will evalute the operators precdence and associative rule");
		
		//get the user keyboard input
		Scanner kb = new Scanner(System.in);
		String userInput = kb.nextLine();
		
		//String to hold the expresion
		String inputExpresions = "";
		
		//loop through userinput string
		for(int i=0;i<userInput.length();i++)
		{
			//use regex to see if the item is either a letter or a number, if it is add a space
			if((userInput.charAt(i)+"").matches("[A-z0-9]")) 
			{
				inputExpresions+=" ";
			}
			else
			{
				//add current expresion
				inputExpresions+=userInput.charAt(i);
			}
		}
		
		//Loop through string of expresions and only select words (aka any time there is a space do getPrecedence
		for(String expresion : inputExpresions.split(" "))
		{
			getPrecedence(expresion);

		}
		
	}
	
	
	//compare output to determine operator priority and associative rule
	public static void getPrecedence(String input)
	{
		//check for the artmatic and boolean expresions
		if(input.equals("++") || input.equals("--") || input.equals("+") ||input.equals("-"))
		{
			System.out.println(input +" has the heightest priorty and has a right to left Associatvity");
		}
		else if (input.equals("*") || input.equals("/") || input.equals("%"))
		{
			System.out.println(input +" has the second heighest priorty and has a right to left Associatvity");
		}
		else if (input.equals("<") || input.equals("<=") || input.equals(">=")||input.equals(">"))
		{
			System.out.println(input +" has the third heighest priorty and has a left to right Associatvity");
		}
		else if(input.equals("==") || input.equals("!="))
		{
			System.out.println(input +" has the lowest priorty and has a left to right Associatvity");
		}
	}
}
