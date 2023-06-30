package java_prep;

import java.util.Scanner;

public class percentage_calc {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter marks in all five subjects : ");
		float marks1 = s.nextFloat();
		float marks2 = s.nextFloat();
		float marks3 = s.nextFloat();
		float marks4 = s.nextFloat();
		float marks5 = s.nextFloat();
		
		float result = (marks1+marks2+marks3+marks4+marks5)/5;
		System.out.println("Your percentage is "+result);

	}

}
