package single_dimension_array;
import java.util.Scanner;
public class copying_an_array {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter the size of the array : ");
		int size = s.nextInt();
		int[] arr1 = new int[size];
		
		//inserting the values
		for(int i = 0; i<size; i++)
		{
			System.out.print("Enter the value for "+i+" index : " );
			arr1[i] = s.nextInt();
		}
		
		//creating new array
		int[] arr2 = new int[size];
		
		//copying
		
		for(int i =0; i<size; i++)
		{
			arr2[i] = arr1[i];
		}
		//printing the second array
		for(int i = 0; i<size;i++)
		{
			System.out.println(arr2[i]);
		}
	}

}
