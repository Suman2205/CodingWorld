package ConditionalStatements;
import java.util.Scanner;
public class ThreePointsOnLine {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        double x1,y1;
        System.out.print("Enter first point coordinates: ");
        x1=sc.nextDouble();
        y1=sc.nextDouble();
        double x2,y2;
        System.out.print("Enter second point coordinates: ");
        x2=sc.nextDouble();
        y2=sc.nextDouble();
        double x3,y3;
        System.out.print("Enter third point coordinates: ");
        x3=sc.nextDouble();
        y3=sc.nextDouble();
        double m1=(y2-y1)/(x2-x1);
        double m2=(y3-y2)/(x3-x2);
        if (m1==m2){
            System.out.println("Entered all three points are lies on a single line");
        }
        else{
            System.out.println("Entered all three points are not lies on a single line");
        }
    }
}
