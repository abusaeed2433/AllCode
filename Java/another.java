
/**
 * Write a description of another here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.Scanner;
public class another {
public void findAbc(String input) {
    int index = input.indexOf("abc");
    while (true) {
        if (index == -1) {
            break;
        }
        String found = input.substring(index+1, index+4);
        System.out.println(found);
        index = input.indexOf("abc", index+4);
    }
}
   public void test() {
    Scanner sc=new Scanner(System.in);
    String input=sc.next();
   // findAbc(input);
    System.out.println(input.indexOf("abc"));
}
}
