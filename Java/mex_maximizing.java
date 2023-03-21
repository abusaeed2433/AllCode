
/**
 * Write a description of mex_maximizing here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
public class mex_maximizing {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int x=sc.nextInt();
        int arr[]=new int[x];
        for(int i=0;i<x;i++) arr[i]=0;
        while(t>0){
            t--;
            int n=sc.nextInt();
            arr[n%x]++;
            int brr[]=Arrays.copyOf(arr,arr.length);
            Arrays.sort(brr);
            int mini=brr[0];
            for(int i=0;i<x;i++){
                if(arr[i]==mini)
                {
                    System.out.println((mini*x)+i);
                    break;
                }
            }
        }
    }
}
