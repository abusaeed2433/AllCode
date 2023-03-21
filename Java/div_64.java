import java.util.Scanner;
import java.lang.String;
public class div_64 {
    public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    String s=sc.nextLine();
    int f1=s.indexOf("1");
    if(f1==-1) System.out.println("no");
    else{
    int count=0;
    for(int i=f1;i<s.length();i++){
        if(s.charAt(i)=='0') count++;
    }
//    System.out.println(count);
    if(count>=6) System.out.println("yes");
    else System.out.println("no");
}
}
}
