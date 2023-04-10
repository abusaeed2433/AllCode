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
        if(p.left == null && p.right == null){
            //arr.add(null);
            return;
        }

        if(p.left != null){
            inTraverse(p.left,arr);
            arr.add(p.left.val);
        }
        arr.add(p.val);
        if(p.right != null){
            inTraverse(p.right,arr);
            arr.add(p.right.val);
        }



    }

    
}