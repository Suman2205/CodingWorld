package LinkedList;

public class BasicImplementation {
    public static class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
        }
    }
    public static class LinkedList{
        Node head;
        LinkedList(){
            head=null;
        }
        void insertAtHead(int data){
            Node new_node=new Node(data);
            if(head==null){
                head=new_node;
                return;
            }
            new_node.next=head;
            head=new_node;
        }
        void insertAtTail(int data){
            Node new_node=new Node(data);
            if(head==null){
                head=new_node;
                return;
            }
            Node temp=head;
            while(temp.next!=null){
                temp=temp.next;
            }
            temp.next=new_node;
        }
        void  insertAtPosition(int data,int k){
            Node new_node=new Node(data);
            if(head==null){
                head=new_node;
                return;
            }
            Node temp=head;
            for(int i=0;i<k-1;i++){
                temp=temp.next;
            }
            new_node.next=temp.next;
            temp.next=new_node;
        }
        void deleteAtHead(){
            if(head==null){
                System.out.println("Linked List is empty");
                return;
            }
            Node t=head;
            System.out.println(t.data+" is deleted");
            t=null;
            head=head.next;
        }
        void deleteAtTail(){
            if(head==null){
                System.out.println("Linked List is empty");
                return;
            }
            Node t=head;
            while(t.next.next!=null){
                t=t.next;
            }
            Node temp=t.next;
            System.out.println(temp.data+" is deleted");
            t.next=null;
            temp=null;
        }
        void deleteAtPosition(int k){
            if(head==null){
                System.out.println("Linked List is empty");
                return;
            }
            if(k==0){
                deleteAtTail();
                return;
            }
            Node temp=head;
            for(int i=0;i<k-1;i++){
                temp=temp.next;
            }
            Node t=temp.next;
            System.out.println(t.data+" is deleted");
            temp.next=t.next;
            t=null;
        }
        void display(){
            Node temp=head;
            while(temp!=null){
                System.out.print(temp.data+" ");
                temp=temp.next;
            }
        }
    }

    public static void main(String[] args) {
        LinkedList ll=new LinkedList();
        ll.insertAtHead(1);
        ll.insertAtHead(2);
        ll.insertAtHead(3);;
        ll.insertAtHead(4);
        ll.insertAtTail(5);
        ll.insertAtTail(6);
        ll.insertAtPosition(8,2);
        ll.display();
        System.out.println();
        ll.deleteAtHead();
        ll.display();
        System.out.println();
        ll.deleteAtTail();
        ll.display();
        System.out.println();
        ll.deleteAtPosition(2);
        ll.display();
    }
}
