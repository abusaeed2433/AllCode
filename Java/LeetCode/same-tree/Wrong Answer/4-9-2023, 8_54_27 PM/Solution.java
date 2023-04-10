// https://leetcode.com/problems/same-tree

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private List<Integer> arr = new ArrayList<>();
    private List<Integer> brr = new ArrayList<>();
    public boolean isSameTree(TreeNode p, TreeNode q) {

        if(p == null && q == null) return true;
        if(p == null || q == null) return false;

        inTraverse(p,arr);
        inTraverse(q,brr);

        // for(Integer a : arr){
        //     System.out.print(a+" ");
        // }
        // System.out.println("i");

        // for(Integer a : brr){
        //     System.out.print(a+" ");
        // }
        // System.out.println("");

        if(arr.size() != brr.size() ) return false;
        for(int i=0; i<arr.size(); i++){
            if(arr.get(i) != brr.get(i)) return false;
        }
        return true;
    }

    private void inTraverse(TreeNode p, List<Integer> arr){
        if(p == null) return;

        inTraverse(p.left,arr);
        arr.add(p.val);
        inTraverse(p.right,arr);
    }

    
}