import java.io.File;
import java.io.IOException;
import java.util.Scanner;

/*Name Kion Smith
 *ID kls160430
 *Class 4337.501
 */


public class lexicalMain
{
	//character classes
	final static int LETTER =0;
	final static int DIGIT =1;
	final static int UNKNOWN = 99;
	
	//Token codes
	final static int INT_LIT = 10;
	final static int IDENT =11;
	final static int ASSIGN_OP =20;
	final static int ADD_OP =21;
	final static int SUB_OP =22;
	final static int MULT_OP =23;
	final static int DIV_OP =24;
	final static int LEFT_PAREN =25;
	final static int RIGHT_PAREN =26;
	
	//added  another token not need because java does not have an eof character
	final static int EOF =-1;
	
	static int charClass;
	static char lexeme [] = new char[100];
	static char nextChar;
	static int lexLen =0;
	static int token;
	static int nextToken;

	//String for holding contents of string
	private static String fileContents;
	//index of the current string
	private static int fileIndex;
	
	public static void main(String[] args)
	{
		//setting what the file to look for
		File f = new File("front.in");
		
		//if file exists say that id does, and poulate the lexeme with  0
		if(f.exists())
		{
			System.out.println("File exists");
			for(int i=0;i<100;i++)
			{
				lexeme[i] = '0';
			}
			
			try
			{
				//Intiliaze scanner to read file
				Scanner kb = new Scanner(f);
				
				//setting global vars to default starting postions
				fileContents = "";
				fileIndex =0;
				
				//while the file has more lines add more lines
				while(kb.hasNextLine())
				{
					fileContents += kb.nextLine();
				}
				
				kb.close();
				//get the current char
				getChar();
				
				do
				{
					//while string from file is greater than the index, lex (lexical analyzer to parse through)
					lex();
				}while (fileContents.length()>fileIndex);
				

			}
			catch (Exception e)
			{
				e.printStackTrace();
			}
		}
		else
		{
			//try to create the file if file not found
			try 
			{
				f.createNewFile();
				
			} 
			catch (IOException e) 
			{
				e.printStackTrace();
			}
		}
	}
	
	//look up table to determine lex of unknown characters
	public static int lookup (char ch)
	{
		
		switch(ch)
		{
			case '(':
				//add the unknown lexeme
				 addChar();
				 nextToken = LEFT_PAREN;
				 break;
				 
			case ')':
				//add the unknown lexeme
				 addChar();
				 nextToken = RIGHT_PAREN;
				 break;
				 
			case '+':
				//add the unknown lexeme
				 addChar();
				 nextToken = ADD_OP;
				 break;
				 
			case '-':
				//add the unknown lexeme
				 addChar();
				 nextToken = SUB_OP;
				 break;
				 
			case '*':
				//add the unknown lexeme
				 addChar();
				 nextToken = MULT_OP;
				 break;
				 
			case '/':
				//add the unknown lexeme
				 addChar();
				 nextToken = DIV_OP;
				 break;
			
			//Java does not have an eof, but to be faithful to c code, it is included
			 default:
				 addChar();
				 nextToken = EOF;
				 break;
		}
		
		return nextToken;
	}
	//add nextchar to lexeme
	public static void addChar()
	{
		if(lexLen <=98)
		{
			//add char to next postion in lexeme array
			lexeme[lexLen++] =nextChar;

		}
		else
		{
			System.out.println("Error - Lexeme is too long");
		}
	}
	
	//determine what type the nextchar is
	public static void getChar()
	{
		
		try 
		{	
			//if have not iterated through the whole string determine the nextchars type
			if(fileContents.length()>fileIndex)
			{	
				//setting next char to the next index
				nextChar = fileContents.charAt(fileIndex);
				
				//if the char is a letter
				if(Character.isLetter(nextChar))
				{
					
					charClass = LETTER;
				}
				//if char is a num
				else if(Character.isDigit(nextChar))
				{
					charClass = DIGIT;
				}
				//for other symbols like + / ()
				else
				{
					charClass = UNKNOWN;
				}
				
				//incremente the index of the string
				fileIndex++;
			}
			else
			{
				//No eof symbol in java, but wanted to include this
				charClass = EOF;
			}
			
			
		}
		catch(Exception e)
		{
			e.printStackTrace();
			
		}
		
		
	}
	//checks for spaces
	public static void getNonBlank()
	{
		while(Character.isWhitespace(nextChar))
		{
			// if character is a space, get the character
			getChar();
		}
	}
	
	public static int lex()
	{
		
		lexLen =0;
		
		getNonBlank();
		switch (charClass)
		{
		
			//read letter characters
			 case LETTER:
				 addChar();
				 getChar();
				 while (charClass == LETTER || charClass == DIGIT) 
				 {
					 addChar();
					 getChar();
				 }
				 nextToken = IDENT;
				 break;
			
			//read int characters
			 case DIGIT:
				 addChar();
				 getChar();
				 while (charClass == DIGIT) 
				 {
					 addChar();
					 getChar();
				 }
				 nextToken = INT_LIT;
				 break;
			
			//read other operators
			 case UNKNOWN:
				  lookup(nextChar);
				 getChar();
				
				 break;
				 
			 //end of file; not needed
			 default:
				 nextToken = EOF;
				 lexeme[0] = 'E';
				 lexeme[1] = 'O';
				 lexeme[2] = 'F';
				 lexeme[3] = 0;
				 break;
		}
		
		//Out print current token, and then corresponding token
		System.out.print("Next token is :"+nextToken+" Next lexeme is :");
		
	     for(int i=0;i<lexLen;i++)
	     {
	    	 System.out.print(lexeme[i]);
	     }
	     
	     System.out.println();
		
		return nextToken;
	}
}
