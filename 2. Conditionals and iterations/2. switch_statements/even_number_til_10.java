package switch_statements;

import java.util.Scanner;

public class even_number_til_10 {
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter a number from 1 to 10 : ");
		int num = s.nextInt();
		switch(num)
		{
		case 1 : System.out.println("The number is odd ");
			break;
		case 2 : System.out.println("The number is even");
			break;
		case 3 : System.out.println("The number is odd");
			break;
		case 4 : System.out.println("The number is even");
			break;
		case 5 : System.out.println("The number is odd");
			break;
		case 6 : System.out.println("The number is even");
			break;
		case 7 : System.out.println("The number is odd");
			break;
		case 8 : System.out.println("The number is even");
			break;
		case 9 : System.out.println("The number is odd");
			break;
		case 10 : System.out.println("The number is even");
			break;
		default : System.out.println("The number is not between 1 and 10");
		}
	}
}
