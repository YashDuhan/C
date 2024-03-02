package functions;

import java.util.Scanner;
public class Whether_prime {

	public static boolean isPrime(int n)
	{
		int d = 2;
		while(d<n)
		{
			if(n%d == 0)
			{
				return false;
			}
			d++;
		}
		return true;
	}
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		boolean ansPrime = isPrime(n);
		System.out.println(ansPrime);
	}

}
