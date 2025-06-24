package OOPS;
public class Constructor {
    public static class Student{
        String name;
        int rno;
        double percentage;
        final String SchName="SMB";
        private static int noOfStudents;
        public Student(String s,int r,double p){      //Parametrized Constructor
            name=s;
            rno=r;
            percentage=p;
            noOfStudents++;
        }
        public Student(Student s){      //copy constructor
            name=s.name;
            rno=s.rno;
            percentage=s.percentage;
        }
    }

    public static void main(String[] args) {
        Student s=new Student("Suman",77,85);
        System.out.println(s.name);
        System.out.println(s.rno);
        System.out.println(s.percentage);
        System.out.println(s.SchName);
        System.out.println(s.noOfStudents);
//        Student n=new Student(s);        //Initializing object of Student class with the help of another object of Student class by using copy constructor
//        System.out.println(n.name);
//        System.out.println(n.rno);
//        System.out.println(n.percentage);
//        System.out.println(n.SchName);

        Student n=new Student("Neha",60,85);
        System.out.println(n.name);
        System.out.println(s.rno);
        System.out.println(s.SchName);
        System.out.println(s.percentage);
        System.out.println(s.noOfStudents);
        System.out.println(Student.noOfStudents);
    }
}
