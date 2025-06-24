package Strings;
import java.util.*;
public class StringBuilderClass {
    public static void main(String[] args) {
        StringBuilder str=new StringBuilder("Hello");
        str.append("hi");
        str.setCharAt(6,'a');
        System.out.println(str);
        System.out.println(str.length());
        str.deleteCharAt(6);
        System.out.println(str);
        str.delete(2,5);
        System.out.println(str);
        str.reverse();
        System.out.println(str);
    }
}
