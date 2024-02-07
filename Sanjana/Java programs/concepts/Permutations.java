package concepts;

public class Permutations {

    public static void permut(String up,String p){
        if(up.isEmpty()){
            System.out.println(p);
            return;
        }

        char ch=up.charAt(0);
        for (int i = 0; i < p.length()+1;i++) {
            String s=p.substring(0,i);
            String e=p.substring(i,p.length());
            permut(up.substring(1),s+ch+e);
    }
    
}

public static void main(String[] args) {
    permut("abc","");
}
}
