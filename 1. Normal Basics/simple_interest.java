package java_prep;

import java.util.Scanner;

public class simple_interest {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int p = s.nextInt();
		int  r = s.nextInt();
		int t = s.nextInt();
		float si = (p*r*t)/100;
		
		System.out.println(si);

	}

}
