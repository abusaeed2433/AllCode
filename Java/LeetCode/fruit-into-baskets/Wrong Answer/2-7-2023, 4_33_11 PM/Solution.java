// https://leetcode.com/problems/fruit-into-baskets

class Solution {

    private Node[] nodes = new Node[2];
    private int ans = 0, realAns = 0;

    public int totalFruit(int[] fruits) {
        
        for(int i=0;i<2;i++) nodes[i] = new Node();
    
        for(int i=0;i<fruits.length; i++){
            takeOrReject(fruits[i],i);
        }

        return Math.max(ans,realAns);

    }

    private void takeOrReject(int val, int index){

        for(int i=0; i<2; i++){
            if(nodes[i].val == val){
                nodes[i].set(val,index);
                ans++;
                return;
            }

            if(nodes[i].val == -1){
                nodes[i].set(val,index);
                ans++;
                return;
            }
        }

        realAns = ans;

        if(nodes[0].index < nodes[1].index){            
            ans -= nodes[0].count-1;
            nodes[0].count = 0;
            nodes[0].set(val,index);
        }
        else{
            ans -= nodes[1].count-1;
            nodes[1].count = 0;
            nodes[1].set(val,index);
        }
    }
}

class Node{
    public int val = -1, count = 0, index = -1;
    public void set(int val, int index){
        this.val = val;
        this.index = index;
        count++;
    }
}