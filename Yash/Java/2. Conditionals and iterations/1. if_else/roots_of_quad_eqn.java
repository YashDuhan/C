package if_else;
import java.lang.Math;

import java.util.Scanner;

public class roots_of_quad_eqn {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		double d,root1,root2;
		System.out.println("Enter the value for a ,b,c : ");
		double a = s.nextDouble();
		double b = s.nextDouble();
		double c = s.nextDouble();
		
		d = (b*b)-4*a*c;
		
		if(d>0)
		{
			System.out.println("Two real roots");
			root1 = (-b+Math.sqrt(a))/2*a;
			root2 = (-b-Math.sqrt(a))/2*a;
			System.out.println("Roots are "+root1+" and "+root2);
		}
		if(d == 0)
		{
			System.out.println("1 root");
			root1 = (-b/2*a);
			System.out.println("Root is "+root1);
		}
		if(d<0)
		{
			System.out.println("Imaginary roots");
		}
		
	}

}
