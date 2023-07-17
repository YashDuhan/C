package array_list;
import java.util.ArrayList;
public class array_list_ops {

	public static void main(String[] args) {

		ArrayList<Integer> arr = new ArrayList<>();
		arr.add(10);
		arr.add(20);
		arr.add(30);
		arr.add(50);
		arr.add(1, 100); //it will add 100 at index 1
		arr.remove(3); // will remove the element at index 3
		arr.set(0, 500); //will replace the value of index 0 from 10 to 100 
		System.out.println(arr.size()+ " is the size of the array.");
		
		for(int i = 0; i<arr.size();i++)
		{
			System.out.println(arr.get(i));
		}
	}

}
