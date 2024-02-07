package concepts;
// import java.util.Scanner;

public class LinkedLists {
    private Node head;
    private Node  tail;
    private int size;
 
       class Node{
        int data;
        Node next;

        Node(int data){
            this.data=data;
        }
      }

  //To insert new nodes in list using all methods.......

 public void addToHead(int data){
         Node newNode=new Node(data);
        if(head==null){
            head=newNode;
            tail=newNode;
            size++;
            return;
        }      
        newNode.next=head;
        head=newNode;  
        size++;
      }

public void addToTail(int data){
        Node newNode =new Node(data);
        if(head==null && tail==null){
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
         tail.next=newNode;
         tail=newNode;
         size++;
}

public void insertMid(int pos,int data){
        Node newNode =new Node(data);
        int count=1;
        Node temp=head;
        if(pos<0 || pos>size ){
            System.out.println("Position unreachable");
            return;
        }
        if(head==null){
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        while(count<pos-1){
            temp=temp.next;
            count++;
        }

        newNode.next=temp.next;
        temp.next=newNode;
        size++;

}
 //delete nodes from linked list

 public int deleteFromHead(){
    if(head==null){
            System.out.println("No elements in list");
            return -1;
        }
     int val=head.data;
    if(head==tail){
        head=tail=null;
        size--;
        return val;
    }
        head=head.next;
        size--;
        return val;
}

 public void deleteFromTail(){
    if(head==null){
        System.out.println("No elements in list");
        return;
    }
    if(head==tail){
        head=tail=null;
        size--;
        return;
    }
    Node temp=head;
    while(temp.next!=tail){
         temp=temp.next;
    }
    temp.next=null;
    tail=temp;
    size--;
}

//Find valeue in linked list
public int findvalue(int value){
    
    Node temp=head;
    int count=1;
    while(temp!=null && count <=size){
        if(temp.data==value){
            return count;
        }
        else{
            temp=temp.next;
        }
        count++;
    }
    if(temp==null){
        System.out.println("not found");
        return -1;
    }
    return 0 ;
}

public void Display(){
     Node temp=head;
    if(head==null){
            System.out.println("List is empty!");
            return;
    }
    while(temp!=null){
            System.out.print(temp.data+" -> ");
            temp=temp.next;
    }
    System.out.println("END");
}
     

public void displayInfo(){
    if(head==null){
         System.out.print("Head : "+head+"     ");
        System.out.print("Tail : "+tail+"    ");
        System.out.print("Size : "+size);
        System.out.println();
        return;
    }
    
        System.out.print("Head : "+head.data+"     ");
        System.out.print("Tail : "+tail.data+"    ");
        System.out.print("Size : "+size);
        System.out.println();
      }


    public static void main(String[] args) {
        // Scanner sc=new Scanner(System.in);
        LinkedLists list=new LinkedLists();
        list.Display();
         
        list.addToTail(10);
        list.addToTail(20);
        list.addToTail(30);
        list.addToTail(40);
        list.addToHead(100);;

        // list.deleteFromHead();
        // list.deleteFromTail();
        // list.deleteFromTail();
        // list.deleteFromTail();
        // list.deleteFromHead();

        list.Display();
        int ans=list.findvalue(10);
        System.out.println(ans);
        list.displayInfo();
        
    }
}
