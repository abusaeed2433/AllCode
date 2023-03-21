
/**
 * Write a description of discovering_permutation here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.io.*;
import java.util.*;
public class discovering_permutation {
    public static String count="";
    public static void FindString(String arr[],int l,int r,int k){
        if(l==r){
            Printer(arr,k);
        }
        else{
            for(int i=l;i<r+1;i++){
                String ch=arr[i];
                arr[i]=arr[l];
                arr[l]=ch;
                if(count.length()>k) return;
                else{
                    FindString(arr,l+1,r,k);
                    String ch2=arr[i];
                    arr[i]=arr[l];
                    arr[l]=ch2;
                }
                
            }
        }
    }
    public static void Printer(String[] arr,int k){
        String ans="";
        for(int i=0;i<arr.length;i++){
            ans+=arr[i];
        }
        count+="a";
        if(count.length()<=k) System.out.println(ans);
    }
    public static void main(String args[]){
        String arr[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",};
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int n,k;
        for(int i=0;i<t;i++){
            count="";
            System.out.print("Case ");
            System.out.print(i+1);
            System.out.println(":");
            n=sc.nextInt();
            k=sc.nextInt();
            String brr[]=new String[n];
            for(int j=0;j<n;j++) brr[j]=arr[j];
            FindString(brr,0,n-1,k);
        }
    }
}