package Questions;
import java.util.Arrays;
import java.util.HashMap;
class arrayPractice1{
    public static boolean checkDistinct(int[] arr){
         Arrays.sort(arr);
            for(int i=1;i<arr.length;i++){
                if(arr[i]==arr[i-1]){
                    return true;
                }
            }
            return false;
    }

    public static boolean checkAnagram(String s,String t){

        char ip[]=s.toCharArray();
        char anag[]=t.toCharArray();

        Arrays.sort(ip);
        Arrays.sort(anag);

        String sn=new String(ip);
        String an=new String(anag);

        System.out.println(sn +" "+an);
        if(sn.equals(an)){
            return true;
        }
        else{
            return false;
        }
    }
     public static int minSteps(String s, String t) {
        HashMap<Character,Integer> smap=new HashMap<>();
        HashMap<Character,Integer> tmap=new HashMap<>();

        for(char ch:s.toCharArray()){
            smap.put(ch,smap.getOrDefault(ch,0)+1);
        }
        for(char ch:t.toCharArray()){
            tmap.put(ch,tmap.getOrDefault(ch,0)+1);
        }
        System.out.println(smap);
        System.out.println(tmap);
        int incr=0;
        int decr=0;
        int count;

        for(char i : smap.keySet()){
            // if(tmap.containsKey(i)){
                int diff=0;
                if(smap.get(i)!=tmap.getOrDefault(i,0)){
                     diff =smap.get(i)-tmap.getOrDefault(i,0);
                     System.out.println(diff);
                }
                if(diff>0){
                    incr+=diff;
                }
                else {
                    decr+=diff;
                }
            

        }
        if(incr==0 && decr==0){
            return 0;
        }
        System.out.println("  val "+incr+" "+decr);
        count=incr+decr+1;
        return count;
    }
     public static void main(String[] args) {
        // int arr[]={-2,3,6,398,4,5,67,8,9,0,799,57653,3098,8761,334,445,556,66,77,88,99,90};
        // System.out.println(checkDistinct(arr));
    System.out.println(minSteps("gctcxyuluxjuxnsvmomavutrrfb","qijrjrhqqjxjtprybrzpyfyqtzf"));
     }
}