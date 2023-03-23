// https://leetcode.com/problems/fruit-into-baskets

class Solution {

    private Node[] map = new Node[2];

    private int ans = 0;

    public int totalFruit(int[] fruits) {

        for(int i=0;i<2;i++) {
            map[i] = new Node();
        }
    
        int i=0, j = 0; 
        
        for( ; i<fruits.length ; ){
            
            if( canITake(fruits[i]) ){
                i++;
            }
            else{
                decrease(fruits[j]);
                j++;
            }    
            ans = Math.max(i-j,ans);  
            System.out.println(j+" "+i+" "+ans);
        }

        return ans;
    }

    private void decrease(int fruit){
        for(int i=0;i<2;i++){
            if(map[i].val == fruit){
                map[i].count--;
                if(map[i].count <= 0)
                    map[i] = new Node();
                return;
            }
            else{
                map[(i+1)%2].count--;
                if( map[(i+1)%2].count <= 0 )
                    map[ (i+1)%2 ] = new Node();
                return;
            }
        }
    }

    private boolean canITake(int val){

        for(int i=0; i<2; i++){
            if( map[i].val == val){               
                map[i].count++;
                return true;
            }

            if( map[i].val == -1){
                map[i].val = val;
                map[i].count=1;
                return true;
            }
        }
        return false;
    }

}

class Node{
    public int val = -1, count = 0;    
}