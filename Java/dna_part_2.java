
/**
 * Write a description of dna_part_2 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.Scanner;
import java.util.Arrays;
public class dna_part_2 {
    public int findStopCodon(String dna,int startIndex){
        int taa=dna.indexOf("TAA",startIndex);
        int tga=dna.indexOf("TGA",startIndex);
        int tag=dna.indexOf("TAG",startIndex);
        int arr[]=new int[3];
        arr[0]=taa; arr[1]=tag; arr[2]=tga;
        Arrays.sort(arr);
        for(int i=0;i<3;i++){
            if((arr[i]-startIndex)%3==0){
                return arr[i];
            }
            
        }
        return -1;
    }
    public int findStartCodon(String dna,int ip){
        return dna.indexOf("ATG",ip);
    }
    public void testFindStopCodon(){
        Scanner sc=new Scanner(System.in);
        String dna=sc.next();
        int pos=0;
        while(findStartCodon(dna,pos)!=-1){
            int startpos=findStartCodon(dna,pos);
            int stoppos=findStopCodon(dna,startpos);
            if(startpos==-1) break;
            else{
                String s=dna.substring(startpos,stoppos+3);
            System.out.println(s);
            pos=startpos+3;
        }
    }
    }
}
