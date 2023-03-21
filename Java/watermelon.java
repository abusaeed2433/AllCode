
/**
 * Write a description of watermelon here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.Scanner;
public class watermelon {
    public void main(){
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    if(n<=2) System.out.println("NO");
    else{
        if(n%2==0) System.out.println("YES");
        else System.out.println("NO");
    }
}
}
