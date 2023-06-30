package Pre_defined_funcs;
import java.lang.Math;
import java.util.Scanner;
public class pow_func {

	public static void main(String[] args) {
	System.out.println("Enter 2 number : ");
	Scanner s = new Scanner(System.in);
	double a = s.nextDouble();
	double b = s.nextDouble();
	double output = Math.pow(a, b);
	System.out.println(a+" raised to power "+ b+ " is " + output);
	

	}

}
