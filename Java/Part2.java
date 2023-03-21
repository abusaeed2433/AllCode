
/**
 * Write a description of part2 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.Scanner;
public class Part2 {
/*public String FindSimpleGene(String dna){
    int ip=dna.indexOf("ATG");
    if(ip==-1)return "";
    else{
        int fp=dna.indexOf("TAA",ip+3);
        if(fp==-1) return "";
        else{
        dna=dna.substring(ip,fp+3);
        if(dna.length()%3==0) return dna;
        else return "";
    }
    }

}
*/
public void testSimpleGene(){
    Scanner sc=new Scanner(System.in);
    String s=sc.next();
    //String dna=FindSimpleGene(s);
    System.out.println(s.toLowerCase());
}
}