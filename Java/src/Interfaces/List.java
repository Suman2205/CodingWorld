package Interfaces;

import java.util.*;

public class List {
    public static void main(String[]arg) {
        ArrayList<Integer> al = new ArrayList<Integer>();
        for (int i = 1; i <= 5; i++) {
            al.add(i);
        }
        System.out.println("Array List: ");
        System.out.println(al);
        System.out.println("Size of ArrayList: "+al.size());
        Iterator it = al.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }
        System.out.println("Element at index 2 is deleted that is, " + al.remove(2));
        System.out.println(al);
        ArrayList<Integer> al1 = new ArrayList<Integer>();
        al1.add(6);
        al1.add(7);
        System.out.println("Another array list: " + al1);
        al.addAll(al1);
        System.out.println("By adding another array list, our original list becomes: " + al);

        System.out.println("Linked List: ");
        LinkedList<String>ll=new LinkedList<String>();
        ll.add("One");
        ll.add("Two");
        ll.add("Three");
        System.out.println(ll);
        System.out.println("Size of LinkedList: "+ll.size());
        Iterator it1=ll.iterator();
        while (it1.hasNext()){
            System.out.println(it1.next());
        }
        System.out.println("Adding 'First' at stating and 'Last' at ending position of List");
        ll.addFirst("First");
        ll.addLast("Last");
        System.out.println(ll);
        System.out.println("Element at index 2 is deleted that is, " + ll.remove(2));
        System.out.println(ll);
        System.out.println("Stack: ");
        Stack<Integer>st=new Stack<Integer>();
        st.push(6);
        st.push(7);
        st.push(8);
        System.out.println(st);
        System.out.println("Top element of stack: "+st.peek());
        System.out.println("Printing elements of stack in reverse order: ");
        while(!st.empty()){
            System.out.println(st.pop());
        }
        System.out.println("Vector: ");
        Vector<Integer>v=new Vector<Integer>();
        for(int i=1;i<=3;i++){
            v.add(i);
        }
        System.out.println(v);
        System.out.println("Element at index 1 is deleted that is, "+v.remove(1));
        System.out.println("Clearing all lists");
        v.clear();
        al.clear();
        ll.clear();
        st.clear();
        System.out.println(v);
    }
}
