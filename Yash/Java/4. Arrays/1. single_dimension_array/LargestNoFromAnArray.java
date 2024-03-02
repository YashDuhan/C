package single_dimension_array;
import java.util.Scanner;
public class LargestNoFromAnArray {
	@SuppressWarnings("unused")
	public static double Largest(double[] arrayName)
	{
		double max;
		if(arrayName.length != 0)
		{
			max = arrayName[0];
			for(int i =1; i<arrayName.length; i++)
			{
				if(max < arrayName[i])
				{
					max = arrayName[i];
				}
				return max;
			}
		}
		return 0.0;
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter the size of array :" );
		int size = s.nextInt();
		double[] arr = new double[size];
		
		//inserting elements
		for(int i =0;i<size;i++)
		{
			System.out.print("The value for index "+ i+" is :");
			arr[i] = s.nextDouble();
						
		}
		System.out.println("The largest number is "+Largest(arr));
		

	}

}
