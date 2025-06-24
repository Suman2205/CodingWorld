package OOPS;

import org.w3c.dom.css.Rect;

public class Inheritenance {
    interface Animal{
        int leg=4;
        void walk();
    }
    public static class horse implements Animal{
        public void walk(){
            System.out.println("walks on four legs");
        }
    }
    public static class Shape{
        String color;
    }
    public static class Rectangle extends Shape{
        int length;
        int breadth;
        Rectangle(int l,int b){
            length=l;
            breadth=b;
        }
    }
    public static void main(String[] args) {
         Rectangle r=new Rectangle(4,5);
         r.color="blue";
         horse h=new horse();
         h.walk();
    }
}
