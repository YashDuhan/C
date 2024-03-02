package java_prep;

import java.util.Scanner;

public class calculate_the_third_angle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		System.out.println("Enter 2 angles : ");
		int a = s.nextInt();
		int b = s.nextInt();
		
		int missing_angle = 180-(a+b);
		System.out.println("The missing angle is "+missing_angle);
				

	}

}
