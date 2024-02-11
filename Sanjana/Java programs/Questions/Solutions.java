package Questions;
public class Solutions {
    public static boolean validMountainArray(int[] arr) {
        int s=0;
        int i=0;
        int e=arr.length-1;
        int peakIndex=-1;
         int mid=e+(s-e)/2;

        if(arr.length<3){
            return false;
        }

        while(s<=e){
         mid=e+(s-e)/2;
       
         if(mid==arr.length-1 || mid==0){
            System.out.println("loop breaked");
           break;
        }

            if(mid!=0 && mid!=arr.length-1 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                peakIndex=mid;
                break;
            }
           
            else if(arr[mid]>arr[mid+1]){
                peakIndex=mid-1;
                e=mid-1;
            }
            else{
                peakIndex=mid+1;
                s=mid+1;
            }
              System.out.println(peakIndex);
        }
          System.out.println(peakIndex);
     if(peakIndex==arr.length-1 || peakIndex==0){
            return false;
        }
        for(i=0;i<peakIndex;i++){
            if(arr[i]>=arr[i+1]){
                return false;
            }
        }
        for(i=peakIndex+1;i<arr.length;i++){
            if(arr[i]>=arr[i-1]){
                return false;
            }
        }
        return true;

    }

    public static void main(String[] args) {
        int[] arr={0,1,2,3,4,8,9,10,11,12,11};
       boolean ans = validMountainArray(arr);
       System.out.println(ans);
    }
}
