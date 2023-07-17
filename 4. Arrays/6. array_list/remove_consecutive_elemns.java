package array_list;

import java.util.ArrayList;

public class remove_consecutive_elemns {
	
	public static ArrayList<Integer> removeconsecDups(int arr[])
	{
		ArrayList<Integer> result = new ArrayList<>();
		result.add(arr[0]); //the first element will always be present
		for(int i = 1; i < arr.length; i++)
		{
			if(arr[i] != arr[i-1])
			{
				result.add(arr[i]);
			}
		}
		return result;
	}

	public static void main(String[] args) {
		//array [10,10,20,20,20,30,40,10] will be converted into
		//[10,20,30,40,10] here the 10 is still present because it isn't consecutive
		int arr[] = {0,10,20,20,20,30,40,10};
		ArrayList<Integer> result = removeconsecDups(arr);
		for(int i = 0; i<result.size(); i++)
		{
			System.out.println(result.get(i));
		}
	}

}
