package Basics;
import java.util.Scanner;
public class AreaOfCircle {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        double radius;
        System.out.print("Enter radius: ");
        radius=sc.nextDouble();
        double pi=3.14159;
        double area=pi*radius*radius;
        System.out.println("Area of Circle: "+area);
    }
}
