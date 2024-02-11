package concepts;
import java.util.*;

public class GuessNumberGame {
    public static void main(String[] args) {
        Scanner user =new Scanner(System.in);
        int correctAns=(int)(Math.random()*100);
      
        int userChoice;
        int guess=5;
        System.out.println("Enter your name :");
        String username=user.nextLine();
        System.out.println("HeLlo "+username+" \n Let's begin tha game ! \n You have "+guess+" guesses");
       System.out.println("Enter your Guess(1-100) :");
        do{
        guess--;
        int  userAns =user.nextInt();
        if (userAns==correctAns) {
            System.out.println("Great! That was a correct guess. \n You win.");
            break;
        } 
        else if( userAns> correctAns) {
            System.out.println("Number is smaller than your guess");
        }
        else{
                System.out.println("Number is larger than your guess");
        }
        if (guess==0) {
            System.out.println("\nNo guesses  left.The correct answer is "+correctAns);
            System.out.println("Sorry you Lose the game.Better luck next time");
            break;
        }
        System.out.println("Press 1 to continue and any key to exit");
        userChoice =user.nextInt();
        
          if(userChoice==1){
             System.out.println("Okk Lets try again.\nYou have "+guess+" guesses left. \n Enter your another guess");
         }
         else{
             System.out.println("Ooh! You Give up.Fine.\n The correct answer is "+correctAns);
         }
    }while(userChoice==1 && guess>0);
}
    
}
