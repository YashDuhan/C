package two_dimensional_array;

public class Decl_an_Array {

	public static void main(String[] args) {
		int[][] arr = new int[3][3];
		arr[0][0] = 1;
		arr[0][1] = 2;
		arr[0][2] = 3;
		arr[1][0] = 4;
		arr[1][1] = 5;
		arr[1][2] = 6;
		
		for(int i = 0; i<3;i++)
		{
			for(int j = 0; j<3; j++)
			{
				System.out.println(arr[i][j]);
			}
		}

	}

}
