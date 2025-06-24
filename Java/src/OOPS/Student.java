package OOPS;

public class Student {
     public String name;
     private int rno;
     public double percentage;
     final String schName="SMB";
     private static int noOfStudents;
     public int getRno(){     //getter
         return rno;
     }
     public void setRno(int x){    //setter
         rno=x;
     }
     public static int getNoOfStudents(){
         return noOfStudents;
     }
     public Student(String s,int r,double p){
         name=s;
         rno=r;
         percentage=p;
         noOfStudents++;
     }
}
