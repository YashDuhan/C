package single_dimension_array;
import java.util.Scanner;
public class Prog_to_insert_numbers_then_print_their_sum {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter the size of the array : ");
		int size = s.nextInt();
		int[] arr = new int[size];
		
		//inserting the values
		for(int i = 0; i<size; i++)
		{
			System.out.print("Enter the value for "+i+" index : " );
			arr[i] = s.nextInt();
		}
		
		
		//calc their sum
		int sum = 0;
		for(int i = 0; i<size;i++)
		{
			sum = sum+arr[i];
		}
		System.out.println("The sum is "+ sum);

	}

}
