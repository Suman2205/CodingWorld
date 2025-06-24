package FileHandling;

import java.io.*;
//import java.io.FileWriter;
//import java.io.IOException;
import java.util.Scanner;

public class copy {
    public static void main(String[] args) {
        File f1=new File("example.txt");
        File f2=new File("abc.txt");
        try{
            Scanner sc=new Scanner(f1);
            FileWriter writer=new FileWriter(f2);
            while(sc.hasNextLine()){
                writer.write(sc.nextLine()+"\n");
            }
            if(f2.exists()){
                System.out.println("Successfully copied the data of file "+f1.getName()+" to a file "+f2.getName());
                writer.close();
            }
            else{
                System.out.println("File is not copied");
            }
        }
        catch(IOException e){
            System.out.println(e.getMessage());
        }
    }
}
