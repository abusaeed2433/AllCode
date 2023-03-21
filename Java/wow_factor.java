
/**
 * Write a description of wow_factor here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.lang.String;
import java.util.Scanner;
public class wow_factor {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        long ans=0,count=0,v=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='o') count+=v;
            else if(i>0&&s.charAt(i-1)=='v'){
                v++;
                ans+=count;
            }
        }
        System.out.println(ans);
    }
}
