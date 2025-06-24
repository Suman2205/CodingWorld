package ConditionalStatements;
import java.util.Scanner;
public class absoluteValue {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.print("Enter any integer number: ");
        n=sc.nextInt();
        if (n<0){
            System.out.println("The absolute value of "+n+" is "+(-n));
        }
        else{
            System.out.println("The absolute value of "+n+" is "+n);
        }
    }
}
