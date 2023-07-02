package array_of_strings;
import java.util.Scanner;
public class String_array {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter the size of array : ");
		int size = s.nextInt();
		String[] nameList = new String[size];
		
		//inserting names
		for(int i = 0; i<size; i++)
		{
			System.out.print("Enter the name of "+i+" student : ");
			nameList[i] = s.next();
		}
		
		//printing the output
		for(int i = 0; i<size; i++)
		{
			System.out.println(nameList[i]);
		}
	}

}
