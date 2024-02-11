package Questions;

import java.util.ArrayList;

public class WarmerTemperature {

    //Write a function that will return an array that will tell after how many days we get a warmer temperature
    public static ArrayList<Integer> warmerArray(int arr[]){

        ArrayList <Integer> days =new ArrayList<>();
        for (int i = 0; i < arr.length; i++) {
            int count=0;
            if(i==arr.length-1){
                    days.add(count);
            }
            for (int j = i+1; j < arr.length; j++) {
                if(arr[j]>arr[i]){
                    count++;
                    days.add(count);
                    break;
                }
                else if(j==arr.length-1){
                    days.add(0);
                }
                else{
                    count++;
                }
            }
            
        }

        return days;
    }
    
    public static void main(String[] args) {
        int arr[]={37,38,36,40,30,32,39,50};
       ArrayList<Integer> ans= warmerArray(arr);
       System.out.println(ans);
    }
}
