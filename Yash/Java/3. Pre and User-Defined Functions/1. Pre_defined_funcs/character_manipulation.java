package Pre_defined_funcs;
import java.lang.Character;
import java.util.Scanner;
public class character_manipulation {

	public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	System.out.println("Give the input :  ");
	char input = s.next().charAt(0);
	System.out.println("The input is Digit "+Character.isDigit(input));
	System.out.println("The input is Letter "+Character.isLetter(input));
	System.out.println("The input is UpperCase "+Character.isUpperCase(input));
	System.out.println("The input is Lowercase "+Character.isLowerCase(input));	
	}

}
