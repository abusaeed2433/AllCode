import java.util.Scanner;
import java.lang.String;
public class appleman_and_easy_task{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(),arr[]=new int[n*n];
        String s="";
        for(int i=0;i<n;i++){
            s=sc.next();
            for(int j=0;j<n;j++){
                
                if(s.charAt(j)=='o') arr[(i)*n+j]=0;
                else arr[i*n+j]=1;
            }
        }
        int z=0;
        for(int i=0;i<n*n;i++){
            int count=0;
            if(i-1>=0 && i%n!=0) if(arr[i-1]==0) count++;
            if(i+1<n*n  && i%n!=n-1) if(arr[i+1]==0) count++;
            if(i-n>=0) if(arr[i-n]==0) count++;
            if(i+n<n*n) if(arr[i+n]==0) count++;
            if(count%2==1) {
                z=1;
                break;
            }
        }
        if(z==0) System.out.println("YES");
        else System.out.println("NO");
    }
}
