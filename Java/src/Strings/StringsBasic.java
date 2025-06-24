package Strings;
import java.util.Scanner;
public class StringsBasic {
    public static void main(String[] args) {
        String str="Hello World";
//        System.out.println(str);
//        Scanner sc=new Scanner(System.in);
//        System.out.print("Enter any string of one line: ");
//        String str2;
//        str2=sc.nextLine();     //used to input one line string
//        System.out.println(str2);
//        System.out.print("Enter any string of only one word: ");
//        String str1=sc.next();     //used to input one word string
//        System.out.println(str1);
        str+="def";
        int a=10;
        str+=a;
        double b=1.2;
        str+=b;
        System.out.println(str);
    }
}
