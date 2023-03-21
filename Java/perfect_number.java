
/**
 * Write a description of perfect_number here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.*;
public class perfect_number {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=19,count=1;
        while(count<n){
            k+=9;
            int n1=k,s=0;
            while(n1>=1){
                s+=n1%10;
                n1/=10;
            }
            if(s==10) count++;
        }
        System.out.println(k);
    }
}
