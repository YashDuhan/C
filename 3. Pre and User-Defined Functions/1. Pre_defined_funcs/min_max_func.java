package Pre_defined_funcs;
import java.lang.Math;
import java.util.Scanner;
public class min_max_func {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter 2 numbers : ");
		int num1 = s.nextInt();
		int num2 = s.nextInt();
		
		//Maximum
//		int output = Math.max(num1,num2);
//		System.out.println("The maximum number between "+num1+" and "+num2+" is "+output);
		
		//Minimum
		int output = Math.min(num1, num2);
		System.out.println("The smalles number between "+num1+" and "+num2+" is "+output );



	}



}
