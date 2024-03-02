package array_operations;
import java.util.Scanner;

public class Array_into_func {
	
	public static void printArray(int [] arr)
	{
		int size = arr.length;
		for(int i = 0; i<size; i++)
		{
			System.out.println(arr[i]);
		}
	}

	public static int[] takeInput()
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the size : ");
		int size = s.nextInt();
		int[] arr = new int[size];
		
		for(int i = 0; i<size;i++)
		{
			System.out.println("Enter the element at "+ i + " index");
			arr[i] = s.nextInt();
		}
		return arr;
		
	}
	public static void main(String[] args) {
		int[] arr = takeInput();
		printArray(arr);

	}

}
