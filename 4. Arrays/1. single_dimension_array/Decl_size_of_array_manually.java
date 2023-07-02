package single_dimension_array;
import java.util.Scanner;
public class Decl_size_of_array_manually {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter the size of the array : ");
		int size = s.nextInt();
		int[] num = new int[size];
		//Inserting values into the array
		for(int i = 0; i<size;i++)
		{
			System.out.print("Enter the value for "+i+" index : " );
			num[i] = s.nextInt();
		}
		//printing the values 
		for(int i = 0; i<size; i++)
		{
			System.out.println(num[i]);
		}
		
	}

}