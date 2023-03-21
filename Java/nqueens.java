import java.io.*;
import java.util.*;
public class Main{
    public static int n;
    public static String[][] arr;
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        if(n==1){
            System.out.println("Q");
        }
        else if(n==2 || n==3){
            System.out.println("Not Possible");
        }
        else{
            DoEverything(n);
        }
    }
    
    public static void DoEverything(int n){
        arr=new String[n][n];
        arr=CreateBoard(n);
        SetRowWise(arr,0);
    }
    public static boolean isfirsttime=true;
    public static void Printer(String[][] arr){
        if(isfirsttime){
            isfirsttime=false;
        }
        else{
            System.out.println();
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr[i][j]+"\t");
            }
            System.out.println();
        }
    } // printer
    
    public static String[][] CreateBoard(int n){
        String[][] arr=new String[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]="-";
            }
        }
        return arr;
    } // create board
    public static void SetRowWise(String[][] arr,int var){
        while(var<n & var>=0){
            int st=0;
            if(SetColWise(arr,var,st)){
                var++;
                if(var==n) Printer(arr);
            }
            else{
                var--;
                int col=CheckPosition(arr,var);
                if(var<0) break;
                else{
                    SetRowWise(arr,var);
                }
            }
        }
    }
    public static int CheckPosition(String[][] arr,int row){
        int pos=-1;
        for(int i=0;i<n;i++){
            if(arr[row][i].equals("Q")){
                pos=i;
                break;
            }
        }
        return pos;
    }
     public static boolean SetColWise(String[][] arr,int row,int st){
         int i=st;
         while(i<n){
             arr[row][i]="Q";
             if(IsSafe(arr,row,i)){
                 return true;
             }
             else{
                 i++;
             }
         }
         return false;
     }
     
     public static boolean IsSafe(String[][] arr,int row,int col){
         for(int i=0;i<n;i++){
             if(arr[i][col].equals("Q") || arr[col][i].equals("Q")) return false;
         }
         for(int i=0;i<n;i++){
             for(int j=Math.abs(col-row);j<n;j++){
                 if(i==row && j==col) continue;
                 else{
                     if(arr[i][j].equals("Q")) return false;
                 }
             }
         }
         for(int i=row+col-1;i<n;i++){
             for(int j=0;j<n;j++){
                 if(i==row && j==col) continue;
                 else{
                     if(arr[i][j].equals("Q")) return false;
                 }
             }
         }
        return true;
     }







    
}