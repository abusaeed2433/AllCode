
/**
 * Write a description of login_project_copied here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;
import java.util.*;
public class login_project_copied {
    Scanner sc=new Scanner(System.in);
    public int checker(String un){
        int z=0;
        if(un.length()>=15) return 2;
        else{
            for(int i=0;i<un.length();i++){
                if(un.charAt(i)<='z' && un.charAt(i)>='a' || un.charAt(i)<='Z' && un.charAt(i)>='A')
                continue;
                else{
                    if(un.charAt(i)>='0' && un.charAt(i)<='9')
                    continue;
                    else{
                        z=1;
                        break;
                    }
                }
            }
            return z;
        }
    }
    public int user(){
        System.out.println("type 2 to exit. Type other number to continue");
        int ex=sc.nextInt();
        return ex;
    }
    //
    //public int checker2(){
     //   fileResource f=open("C:\Users\ser\OneDrive\Documents\Python\text_file\text_1.txt","r");
    //}
    public int account(){
        System.out.println("type 1=YES, 2=Try again, 3=exit");
        int ac=sc.nextInt();
        return ac;
    }
}
