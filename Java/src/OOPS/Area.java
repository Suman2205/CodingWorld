package OOPS;

import java.util.Scanner;
abstract class AreaFun{
    abstract void CircleArea();
    abstract void CubeArea();
    abstract void RectArea();
}
abstract class Circle extends AreaFun{
    void CircleArea(int r){
        double area=3.14*r*r;
        System.out.println("Area of Circle: "+area);
    }
}
abstract class Cube extends Circle{
    void CubeArea(int a){
        int area=6*a*a;
        System.out.println("Area of Cube: "+area);
    }
}
abstract class Rectangle extends Cube{
    void RectArea(int l,int b){
        int area=l*b;
        System.out.println("Area of Rectangle: "+area);
    }
}
public class Area extends Rectangle{
    void RectArea(){}
    void CircleArea(){}
    void CubeArea(){}
    public static void main(String[] arg){
        Scanner sc=new Scanner(System.in);
        Area obj=new Area();
        System.out.print("Enter radius of circle: ");
        int r=sc.nextInt();
        obj.CircleArea(r);
        System.out.print("Enter edge of a cube: ");
        int a=sc.nextInt();
        obj.CubeArea(a);
        System.out.print("Enter length and breadth of rectangle: ");
        int l=sc.nextInt();
        int b=sc.nextInt();
        obj.RectArea(l,b);
    }
}
