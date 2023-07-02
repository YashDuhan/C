package single_dimension_array;

public class checking_if_2_arrays_are_equal_using_loops {
	public static boolean isEqual(int[] array1, int[] array2)
	{
		//checking if both the arrays are equal using loop
				for(int i = 0; i<array1.length;i++)
				{
					if(array1[i] != array2[i])
					{
						return false;
					}
				}
				return true;
	}
	
	
	public static void main(String[] args) {
		
		int[] listA = {1,2,3,4,5};
		int[] listB = new int[listA.length]; //arrayName.length to return it's size
		
		//copying listA into listB
		for(int i =0; i<listA.length; i++)
		{
			listB[i] = listA[i];
		}
		
		System.out.println("The arrays are equal : "+isEqual(listA,listB));
		
		
		

	}

}

