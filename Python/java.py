import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int n=sc.nextInt();
	    while(n>0){
	        n--;
	        String ans="";
	        String s = sc.next();
	        int n1 = s.length(),test=0,test2=0;
	        for(int i=0;i<n1/2;i++){
	            int num1 = Character.getNumericValue(s.charAt(i));
	            int num2 = Character.getNumericValue(s.charAt(n1-1-i));
	            if(num1>num2){
	                ans+=String.valueOf(s.charAt(i));
	                test=1;
	                break;
	            }
	            else{
	                ans+=String.valueOf(Math.max(num1,num2));
	                if(num1>num2){
	                    test2=1;
	                }
	            }
	        }
	        if(test==1){
	            int i=ans.length();
	            while(i<n1/2){
	                i++;
	                ans+="0";
	            }
	            if(n1%2==1){
	                ans+="0";
	            }
	        }
	        if(test==0 && test2==0){
	            int i = (int)Math.ceil((double)n1/2)-1;
	            int taken=0,pos=-1;
	            String val1 = "";
	            if(n1%2==1){ans+=String.valueOf(s.charAt(n1/2));}
	            while(i>=0){
	                int nm = Character.getNumericValue(s.charAt(i));
	                if(nm!=9){
	                    taken=1;
	                    pos=i;
	                    val1 = String.valueOf(nm+1);
	                    break;
	                }
	                i--;
	            }
	            if(taken==0){
	                System.out.printf("1");
	                for(int ii=0;ii<n1-2;ii++){
	                    System.out.printf("0");
	                }
	                System.out.println("1");
	            }
	            else{
//	                System.out.println(pos+"|"+n1+"|"+val1+"|"+ans);
	                for(int ii=0;ii<(int)Math.ceil((double)n1/2);ii++){
	                    if(ii==pos){
	                        System.out.printf(val1);
	                    }
	                    else{
	                        System.out.printf(String.valueOf(ans.charAt(ii)));
	                    }
	                }
	                for(int ii=n1-(int)Math.ceil((double)n1/2)-1;ii>=0;ii--){
	                    if(pos==ii){
	                        System.out.printf(val1);
	                    }
	                    else{
	                        System.out.printf(String.valueOf(s.charAt(ii)));
	                    }
	                }
	                System.out.println();
	            }
	            
	        }
	        else{
	            System.out.printf(ans);
	            for(int i=0;i<n1-ans.length();i++){
	                System.out.printf(String.valueOf(s.charAt(i)));
	            }
	            System.out.println();
	        }
	    }
	}
}
