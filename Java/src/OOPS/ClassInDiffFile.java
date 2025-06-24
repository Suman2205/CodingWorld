package OOPS;
//import OOPS.Student;
public class ClassInDiffFile {
    public static void main(String[] args) {
        Student s=new Student("Suman",77,85);
//        s.name="Suman";
////        s.rno=77;
//        s.setRno(77);
//        s.percentage=85;
//        Student.noOfStudents=100;    not accessible static member because this static member is declared as private data member
        System.out.println(s.name);
        System.out.println(s.getRno());
        System.out.println(s.percentage);
        Student n=new Student("Neha",60,85);
        System.out.println(n.name);
        System.out.println(n.getRno());
        System.out.println(n.percentage);
        System.out.println(n.schName);
        System.out.println(n.getNoOfStudents());
        System.out.println(Student.getNoOfStudents());
    }
}
