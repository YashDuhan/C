package functions;
import java.util.Scanner;
public class printing_no_from_1_to_n {

	public static void printTillN(int n)
	{
		if(n<= 0)
		{
			return; //just typing return means it will not do anything
		}
		for(int i = 1; i<=n; i++)
		{
			System.out.println(i);
		}
	}
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int num = s.nextInt();
		printTillN(num);

}
}
