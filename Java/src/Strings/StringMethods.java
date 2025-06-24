package Strings;
import java.util.*;
public class StringMethods {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=new String("HelloWorld");
        System.out.println(str.toUpperCase());
        System.out.println(str.charAt(5));
        System.out.println(str.contains("a"));
        System.out.println(str.endsWith("ld"));
        System.out.println(str.startsWith("ab"));
        System.out.println(str.indexOf("a"));
        System.out.println(str.substring(4,8));
        System.out.println(str.substring(5));
    }
}
