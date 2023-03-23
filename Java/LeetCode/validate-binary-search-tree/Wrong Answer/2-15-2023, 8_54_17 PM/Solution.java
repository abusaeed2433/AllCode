// https://leetcode.com/problems/validate-binary-search-tree

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
    public boolean isValidBST(TreeNode root) {
        return isValid(null,root,root.left,true) && 
               isValid(null,root,root.right,false);
    }

    private boolean isValid(TreeNode prev2, TreeNode prev, 
                            TreeNode root, boolean leftTree){

        if(root == null) return true;

        if(prev2 != null){
            int rootVal = prev2.val;
            if(leftTree){
                if( root.val >= rootVal ) return false;
            }
            else{
                if(root.val <= rootVal) return false;
            }
        }

        boolean ok = leftTree ? (root.val >= prev.val) : (root.val <= prev.val);
        if(ok) return false;

        int cur = root.val;
        
        if( (root.left == null || root.left.val < cur ) && 
            (root.right == null || root.right.val > cur) )
        {
            return isValid(prev,root,root.left,leftTree) && 
                   isValid(prev,root,root.right,leftTree);
        }
        else{
            return false;
        }
    }
}