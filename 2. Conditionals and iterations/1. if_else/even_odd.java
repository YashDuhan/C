package if_else;

import java.util.Scanner;

public class even_odd {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter a number : ");
		int n = s.nextInt();
		if (n%2 ==0)
		{
			System.out.println("Number is even");
		}
		else
		{
			System.out.println("Number is odd ");
		}
		}
}
