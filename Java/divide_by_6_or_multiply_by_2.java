
/**
 * Write a description of divide_by_6_or_multiply_by_2 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.Scanner;

public class divide_by_6_or_multiply_by_2 {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            t-=1;
            long n=sc.nextInt(),c2=0,c3=0;
            while(n!=1){
                if(n%2==0){
                    n/=2;c2++;
                }
                else{
                    if(n%3==0){
                        c3++;
                        n/=3;
                    }
                    else{
                        n=-1;
                        break;
                    }
                }
            }
            if(n!=1 || c3<c2) System.out.println("-1");
            else{
                System.out.println(c3+c3-c2);
            }
        }
    }
}
