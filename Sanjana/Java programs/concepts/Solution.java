
package concepts;
import java.io.*;
import java.util.*;





public class Solution {

    public static List<Integer> solve(List<Integer> number,int i,List<Integer> answer,int q){
            if(number.size()==0 || i>=q){
                Collections.reverse(number);
                answer.addAll(number);
                return answer;
            }
            int[] Prime={2,3,5,7,11,13,17,19,23,27,29,31,37,41,43,47,53,57};
            List<Integer> A=new ArrayList<>();
            List<Integer> B=new ArrayList<>();
            
            int j=number.size()-1;
            while(j>0){
                if((number.get(j)%Prime[i])==0){
                    B.add(number.get(j));
                }
                else{
                    A.add(number.get(j));
                }
                j--;
            }
            System.out.println(A);
            System.out.println(B);
            Collections.reverse(B);
            answer.addAll(B);
            solve(A,i+1,answer,q);
            
        return answer;
    }
    
    public static List<Integer> waiter(List<Integer> number, int q) {
    // Write your code here
    List<Integer> ans=new ArrayList<>();
    ans=solve( number, 0,ans,q);
    return ans;
    }


    public static void main(String[] args) throws IOException {
            List<Integer> number=new ArrayList<>();
            number.add(3);
            number.add(4);
            number.add(7);
            number.add(6);
            number.add(5);

            List<Integer> ans=new ArrayList<>();
            ans =waiter(number,1);

    }

}
