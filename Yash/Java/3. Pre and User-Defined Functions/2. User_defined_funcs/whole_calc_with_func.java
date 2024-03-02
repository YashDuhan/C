package functions;

import java.util.Scanner;

public class whole_calc_with_func {

	public static int home_screen()
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Welcome to the calculator");
		System.out.println("1. Addition");
		System.out.println("2. Subtraction");
		System.out.println("3. Multiplication");
		System.out.println("4. Division");
		System.out.print("Choose an option : ");
		int option = s.nextInt();
		
		if(option == 1)
		{
			return 1;
		}
		else if(option == 2)
		{
			return 2;
		}
		else if(option == 3)
		{
			return 3;
		}
		else if(option == 4)
		{
			return 4;
		}
		else
		{
			System.out.println("Not a valid option");
			return 5;
		}
	}
	
	public static int addition(int a,int b)
	{
		return a+b;
	}
	public static int subtraction(int a,int b)
	{
		return a-b;
	}
	public static int division(int a,int b)
	{
		return a/b;
	}
	public static int multiplication(int a,int b)
	{
		return a*b;
	}
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter 2 numbers to perform an operation : ");
		int num1 = s.nextInt();
		int num2 = s.nextInt();
		int choice = home_screen();
		if(choice == 1)
		{
			System.out.println(addition(num1,num2));
		}
		else if(choice == 2)
		{
			System.out.println(subtraction(num1,num2));
		}
		else if(choice == 3)
		{
			System.out.println(multiplication(num1,num2));
		}
		else if(choice == 4)
		{
			System.out.println(division(num1,num2));
		}
		else if(choice == 5)
		{
			home_screen();
		}
		else
		{
			System.out.println("An error occurred");
		}
	}
}
