package concepts;
import java.util.*;
public class BitManipulation {

//method 1: Decimal to binary

    static void ToBinary(int num){
        StringBuilder binary =new StringBuilder("");
        while (num>0) {
            int rem=num%2;
            String mystr =Integer.toString(rem);
            StringBuilder stbr=new StringBuilder(mystr);
            binary.append(stbr);
            num=num/2;
        }
        binary.reverse();
        System.out.println("Entered number in binary is "+binary);
    }

  //method 2

     static int[] ToBinarySec(int decimal){
         int i=0;

            int binary[] = new int[40];
            while (decimal>0) {
                int rem=decimal%2;
                binary[i]=rem;
                i++;
                decimal=decimal/2;
            }
            return binary;
            // System.out.print("Entered number in binary is : ");
            // for (int j = i-1; j >=0; j--) {
            //     System.out.print(binary[j]);
            // }
            // System.out.println();

     }
     
//To calculate number of 1 in binary representation
     static void OnesCount(int decimal){
        int i=0;
        int binary[] = new int[40];
        while (decimal>0) {
            int rem=decimal%2;
            binary[i]=rem;
            i++;
            decimal=decimal/2;
        }
        int count=0;
        for (int j = i-1; j >=0; j--) {
           if(binary[j]==1){
                count++;
           }
        }
        System.out.println("Numeber of 1 in binary repesentation is "+count);
     }
//method to check whether number is in power of two or not
     static void inTwosPower(int num){
        if (num<0) {
            System.out.println("Invalid number");
        }
        else{
                int flag=0;
                while(num>1){
                        int rem=num%2;
                            if (rem!=0) {
                            System.out.println("Number is not in power of 2");
                            flag=1;
                            break;
                        } 
                        num=num/2;
                    }
                    if (flag==0){
                        System.out.println("Number is in power of 2");
                    }
            }
     }

    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter a number in decimal number system : ");
        int num=sc.nextInt();

//Question 1:  Decimal to binary  conversion
         BitManipulation.ToBinary(num);
        int[] binaryarr= BitManipulation.ToBinarySec(num);

// Question 2 : check whether number is in power of 2 or not
          BitManipulation.inTwosPower(num);

 //Question 3: To count number of 1 in binary represetation of a number
               BitManipulation.OnesCount(num);

 //Question 4 : Toggle bit
        System.out.print("Enter position to toggle :");
        int pos= sc.nextInt();
        System.out.print("Enter the number of toggle :");
        int toggle=sc.nextInt();

        for (int i = 0; i < toggle; i++) {
            if(binaryarr[pos]==1) {
                 int z=1<<pos;
                 int y=num & (~z);
                 System.out.println(Integer.toBinaryString(y));
                 binaryarr[pos]=0;
            } else {
                int z=1<<pos;
                int y =num | z;
                System.out.println(Integer.toBinaryString(y));
               binaryarr[pos]=1;
            }
        }

    }
}
