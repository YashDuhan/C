package switch_statements;
import java.util.Scanner;

public class switch_basic_ex {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter the grades : ");
		String grade = s.next();
		switch(grade)
		{
		case "A" : System.out.println("The grade is A");
				break;
		case "B" : System.out.println("The grade is B");
				break;
		case "C" : System.out.println("The grade is C");
				break;
		case "D" : System.out.println("The grade is D");
				break;
		case "F" : System.out.println("The grade is F");
				break;
		default: System.out.println("The grade is invaild");
		}

	}

}
