package concepts;

public class DoublyLL {
    public static Node head,tail;
    int size;

    class Node{
        int data;
        Node next,prev;

        Node(int data){
            this.data=data;
        }
    }

 public void insertAtHead(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=tail=newNode;
            size++;
            return;
        }
        newNode.next=head;
        head.prev=newNode;
        head=newNode;
        size++;
    }

 public void insertAtTail(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=tail=newNode;
            size++;
            return;
        }

        newNode.prev=tail;
        tail.next=newNode;
        tail=newNode;
        size++;

 }

 public void insertMid(int pos,int data){
    int count=1;
    if(pos>size){
        System.out.println("defined position is greater than size of list so adding element at the tail of list");
    }
    if(head==null || pos>=size){
        insertAtTail(data);
        return;
    }
    Node newNode=new Node(data);
    Node currNode=head;
    Node prevNode=null;
    while(count<pos){
        prevNode=currNode;
        currNode=currNode.next;
        count++;
    }
    newNode.next=currNode;
    currNode.prev=newNode;
    newNode.prev=prevNode;
    prevNode.next=newNode;
    size++;
 }

 public void deleteHead(){
        if(head==null){
            System.out.println("No elements in list to delete");
            return ;
        }
        int item=head.data;
        head=head.next;
        size--;
       System.out.println("Deleted item : "+item);
 }

 public void deletetail(){
    if(head==null){
        System.out.println("No elements in list to delete");
            return ;
        }
    
    Node temp=tail.prev;
    int item=tail.data;
    temp.next=null;
    tail.prev=null;
    tail=temp;
    size--;
    System.out.println("Deleted Item : "+item);
}

public void deletemid(int pos){
    if(head==null || pos==1){
      deleteHead();
      return;
    }
    if(pos==size){
        deletetail();
        return;
    }
    if(pos>size || pos<0){
            System.out.println("Can't delete . Invalid position .");
            return;
    }

        int count =1;
        Node currNode=head;
        Node temp=null;

        while(count<pos){
            temp=currNode;
            currNode=currNode.next;
            count++;
        }
        int item=currNode.data;
        temp.next=currNode.next;
        temp.next.prev=temp;
        currNode.next=currNode.prev=null;
        size--;
        System.out.println("Deleted Item : "+item);
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
        DoublyLL list=new DoublyLL();
        list.insertAtHead(10);
        list.insertAtHead(20);
        list.insertAtHead(30);
        list.insertAtHead(40);
        list.insertAtHead(50);
        list.insertAtTail(98);
        list.insertMid(3,900);
        
        list.Display();
        list.deletemid(2);
        list.displayInfo();
    }
    
}
