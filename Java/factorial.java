
/**
 * Write a description of factorial here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.Scanner;
public class factorial {
    public int fact(int n){
        int ans=1;
        for(int i=1;i<=n;i++){
            ans*=i;
        }
        return ans;
    }
    public void main(){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        n=fact(n);
        System.out.println(n);
    }
}
