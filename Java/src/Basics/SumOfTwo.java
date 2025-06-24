package Basics;

import org.w3c.dom.css.Rect;

public class SumOfTwo {
    public static class Rectangle{
        int length;
        int width;
        void getData(int x,int y){
            length=x;
            width=y;
        }
    }

    public static void main(String[] args) {
        Rectangle r=new Rectangle();
        r.getData(4,5);
        System.out.println(r.length);
        System.out.println(r.width);
////        int x=2;
////        int y=3;
////        System.out.println("Sum: "+(x+y));
//        int a=5;
//        int b=4;
//        int c=a&b;
//        System.out.println(c);
//        System.out.println(a^b);
//        System.out.println(~a);
//        System.out.println(a|b);
//        System.out.println(a<<2);
//        System.out.println(a>>2);
//        System.out.println(a>>>2);
//
//        int k=1;
//        do{
//            System.out.print(k+" ");
//            k++;
//        }
//        while(k<=10);
//        System.out.println();
//        System.out.println(Math.round(4.2));
//        System.out.println(Math.round(4.6));
            String x="test";
            String y=new String("test");
        System.out.println(x.equals(y));
        if(x==y){
            System.out.println(x);
        }
        String st="hello";
        char[]chr=new char[5];
        st.getChars(2,4,chr,0);
        System.out.println(chr);
        StringBuilder str=new StringBuilder("hello");
        String st2=st.concat("world");
        System.out.println(st2);
        String str3=String.valueOf(7);
        System.out.println(str3);
        str.deleteCharAt(2);
        str.setLength(10);
        System.out.println(str);
    }
}
