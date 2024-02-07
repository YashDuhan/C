package concepts;

 class Stack{

        private int stack[];
        private int top;
//Costructer defining
        public Stack(int size){
         stack=new int[size];
        top=-1;
        }
        //To insert element
         void push(int item){
               if(top==39){
                System.out.println("Stack overflow");
               } 
               else{
                top=top+1;
                stack[top]=item;
               }
         }
         //to remove element
         int pop(){
                if(top==-1){
                        System.out.println("Stack underflow");
                        return -1;
                }
                else{
                        int item=stack[top];
                        top=top-1;
                        return item;
                }
         }
         void peek(){
                if(top==-1){
                        System.out.println("Stack underflow");
                }
                else{
                        System.out.println(stack[top]);
                }

         }
         void isEmpty(){
                if(top==-1){
                        System.out.println("true");
                       
                }
                else{
                        System.out.println("false");
                        
              }
        }
}

public class StackPractice {

       
    public static void main(String args[]){

        Stack mystack=new Stack(30);
               mystack.push(10);
//         mystack.push(20);
//         mystack.push(30);
//         mystack.peek();
//        int poped= mystack.pop();
//        System.out.println(poped);
//        mystack.peek();
mystack.isEmpty();
        
    }
    
}
