package OOPS;
//import java.util.*;
public class oopsBasic {
    public static class Student{
        String name;
        private int rno;
        double percentage;
    }
    public static class Employee{
        String name;
        private int empid;
    }
    public static void main(String[] args) {
        Student s=new Student();
        s.name="Suman";
        s.rno=77;
        s.percentage=85;
        System.out.println(s.name);
        System.out.println(s.rno);
        System.out.println(s.percentage);
        Employee e=new Employee();
        e.empid=77343029;
        e.name="Neha";
        System.out.println(e.name);
        System.out.println(e.empid);
    }
}
