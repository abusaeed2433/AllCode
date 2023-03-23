// https://leetcode.com/problems/construct-quad-tree

/*
// Definition for a QuadTree node.
class Node {
    public boolean val;
    public boolean isLeaf;
    public Node topLeft;
    public Node topRight;
    public Node bottomLeft;
    public Node bottomRight;

    
    public Node() {
        this.val = false;
        this.isLeaf = false;
        this.topLeft = null;
        this.topRight = null;
        this.bottomLeft = null;
        this.bottomRight = null;
    }
    
    public Node(boolean val, boolean isLeaf) {
        this.val = val;
        this.isLeaf = isLeaf;
        this.topLeft = null;
        this.topRight = null;
        this.bottomLeft = null;
        this.bottomRight = null;
    }
    
    public Node(boolean val, boolean isLeaf, Node topLeft, Node topRight, Node bottomLeft, Node bottomRight) {
        this.val = val;
        this.isLeaf = isLeaf;
        this.topLeft = topLeft;
        this.topRight = topRight;
        this.bottomLeft = bottomLeft;
        this.bottomRight = bottomRight;
    }
};
*/

class Solution {
    private int[][] grid;
    public Node construct(int[][] grid) {
        this.grid = grid;
        Node node = new Node(true,false);
        
        int n = grid.length;

        add(node,0,n,0,n);
        return node;
    }
    private void add(Node parent, int rs,int re,int cs,int ce){

        if(isAllSame(rs,re,cs,ce)) return;
        
        int m1 = (re-rs)/2;
        int m2 = (ce-cs)/2;

        //System.out.println(rs+" "+re+" "+cs+" "+ce+" "+m1+" "+m2);
        //topLeft
        //System.out.println("topLeft");
        boolean val = grid[rs][cs]==1;
        if(isAllSame(rs,rs+m1,cs,cs+m2)){
            parent.topLeft = new Node(val,true);
        }
        else{
            parent.topLeft = new Node(false,val);
            add(parent.topLeft,rs,rs+m1,cs,cs+m2);            
        }

        //topRight
//        System.out.println(rs+" "+(rs+m1)+" "+(cs+m2)+" "+ce);
        val = grid[rs][cs+m2]==1;
        //System.out.println("topRight");
        if(isAllSame(rs,rs+m1,cs+m2,ce)){
            parent.topRight = new Node(val,true);
        }
        else{
            parent.topRight = new Node(false,val);
            add(parent.topRight,rs,rs+m1,cs+m2,ce);
        }

        //bottomLeft
        //System.out.println("bottomLeft");
        val = grid[rs+m1][cs]==1;
        if(isAllSame(rs+m1,re,cs,cs+m2)){
            parent.bottomLeft = new Node(val,true);
        }
        else{
            parent.bottomLeft = new Node(false,val);
            add(parent.bottomLeft,rs+m1,re,cs,cs+m2);
        }

        //bottomRight
        val = grid[rs+m1][cs+m2]==1;
        //System.out.println("bottomRight");
        if(isAllSame(rs+m1,re,cs+m2,ce)){
            parent.bottomRight = new Node(val,true);
        }
        else{
            parent.bottomRight = new Node(false,val);
            add(parent.bottomRight,rs+m1,re,cs+m2,ce);
        }
        
    }

    private boolean isAllSame(int rs,int re, int cs, int ce){
        int tmp = grid[rs][cs];
        for(int i=rs;i<re;i++){
            for(int j=cs;j<ce;j++){
                if(grid[i][j] != tmp){
                    return false;
                }
            }
        }
        return true;
    }

}