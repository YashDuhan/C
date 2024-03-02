package java_prep;

import java.util.Scanner;

public class taking_input_and_printing {
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Write any number : ");
		int num = s.nextInt();
		System.out.println("The number is "+num);
	}
}
