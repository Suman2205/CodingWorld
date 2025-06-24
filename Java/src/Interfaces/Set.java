package Interfaces;

import java.util.*;
public class Set {
    public static void main(String[] args) {
        HashSet<Integer>hs=new HashSet<Integer>();  //store elements in sorted manner
        System.out.println("HashSet: ");
        hs.add(1);
        hs.add(3);
        hs.add(2);
        hs.add(3);   //set contains only unique items
        hs.add(2);
        System.out.println(hs);
        System.out.println("Size of HashSet: "+hs.size());
        Iterator it=hs.iterator();
        while (it.hasNext()){
            System.out.println(it.next());
        }
        System.out.println("Element 3 is removed from hashset");
        hs.remove(3);
        System.out.println(hs);
        System.out.println("TreeSet: ");
        TreeSet<Integer>ts=new TreeSet<Integer>();  //stores element in sorted manner
        ts.add(5);
        ts.add(4);
        ts.add(3);
        System.out.println(ts);
        System.out.println("Top element of tree set is "+ts.first());
        System.out.println("Last element of tree set is "+ts.last());
        System.out.println("Removing top element of tree set that is, "+ts.pollFirst());
        System.out.println(ts);
        System.out.println("LinkedHash Set: ");
        LinkedHashSet<Integer>ls=new LinkedHashSet<Integer>();
        ls.add(6);
        ls.add(4);
        ls.add(8);
        System.out.println(ls);
        System.out.println("Top element of tree set is "+ls.getFirst());
        System.out.println("Last element of tree set is "+ls.getLast());
        System.out.println("Removing top element of tree set that is, "+ls.removeFirst());
        System.out.println(ls);
        System.out.println("Clearing all lists");
        ls.clear();
        ts.clear();
        hs.clear();
        System.out.println(ls);
    }
}
