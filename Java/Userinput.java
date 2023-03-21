
/**
 * Write a description of jakaria here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
 

import javax.swing.*;
import java.util.Scanner;

public class Userinput {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int number;
        System.out.println("Enter any number: ");
        number = input.nextInt();
        System.out.printf("The number you have entered is : %d\n", number);
        String name;
        System.out.printf("Enter your name: ");
        name = input.next();
        System.out.printf("Hello %s", name);
    }
}
