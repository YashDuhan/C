package concepts ;
import java.util.*;
public class ArraylistPractice {
    //Dynamic size array
    // Arraylist <datatype> name  =new Arraylist<>();
    //to get elemnts of any index use get method :name.get(index)

    public static void main(String[] args) {
        // Scanner  sc =new Scanner(System.in);
        ArrayList <Integer> mylist=new ArrayList<>();
        // String[] str={"a","b","c"};
        // int[] nums ={1,2,3};
        for (int i = 0; i < 5; i++) {
          mylist.add(i);
        }
        System.out.println(mylist);
        sublists(mylist,0,"");
         
    }
     //To search an element in array
    public static void search(int target,ArrayList<Integer> arr){
            if(arr.size()==0){
                System.out.println("No elements in array");
            }
            for (int i = 0; i < arr.size(); i++) {
                if (arr.get(i)==target) {
                   System.out.println("Element found at index "+i);
                   break;
                }  
                if (i==arr.size()-1) {
                    System.out.println("Not found");
                }               
            }
    }  
    //o copy one arraylist to another
    public static ArrayList<Integer> copy(ArrayList<Integer> arr){
        ArrayList<Integer> copied=new ArrayList<>();
            for(int elem : arr){
                copied.add(elem);
            }
        return copied;
    }
    //To fin maximum number in arraylist
    public static int max(ArrayList<Integer> arr){
        int max=Integer.MIN_VALUE;
        for(int elem :  arr){
            if(elem >max){
                max=elem;
            }
        }
        return max;
    }
    //To get a sublists 
    public static void  sublists(ArrayList<Integer> arr,int index,String subs){
        if(index==arr.size()){
            System.out.println();
            return;
        }

        sublists(arr, index+1, subs+arr.get(index));
        sublists(arr, index+1, subs);

    }
}
