
/**
 * Write a description of accordion here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.*;
public class accordion {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        int st=0,z=0,pos=0,i=-1,ip=0,lp=0,c1=0,c2=0;
        while(i<3){
            i++;
            if(i==0) {st=s.indexOf('[',pos); ip=st;}
            else if(i==1||i==2){ st=s.indexOf(':',pos); if(i==1) c1=st;}
            else {st=s.indexOf(']',pos); lp=st;}
            if(st==-1){z=1; break;}
            else pos=st+1;
        }
        if(z==1) System.out.println("-1");
        else{
            st=lp;
            while(st!=-1){
                lp=st;
                st=s.indexOf(']',st+1);
            }
            st=c1;
            while(st!=-1&&st<lp){
                c2=st;
                st=s.indexOf(':',st+1);
            }
            int a=0,b=0,c=0,d=0,ans=4;
            for(i=c1;i<=c2;i++){
                if(s.charAt(i)=='|')ans++;
            }
            System.out.println(ans);
        }
    }
}
