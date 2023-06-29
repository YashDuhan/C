package java_prep;
import java.util.Scanner;

public class Performing_Arithmetic_Operations {
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Input 2 numbers : ");
		int num1 = s.nextInt();
		int num2 = s.nextInt();
		int add = num1+num2;
		int sub = num1-num2;
		int mult = num1*num2;
		int div = num1/num2;
		
		System.out.println("The 2 numbers are "+num1+" and "+num2);
		System.out.println("After adding both the numbers we get "+add);
		System.out.println("After subtracting both the numbers we get "+sub);
		System.out.println("After multiplying both the numbers we get "+mult);
		System.out.println("After dividing both the numbers we get "+div);
		
	}
}
