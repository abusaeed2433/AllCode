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
    private int rootVal;
    public boolean isValidBST(TreeNode root) {
        rootVal = root.val;
        return isValid(root.left,true) && isValid(root.right,false);
    }

    private boolean isValid(TreeNode root, boolean leftTree){
        if(root == null) return true;

        if(leftTree){
            if( root.val >= rootVal ) return false;
        }
        else{
            if(root.val <= rootVal) return false;
        }

        int cur = root.val;
        
        if( (root.left == null || root.left.val < cur ) && 
            (root.right == null || root.right.val > cur) )
        {
            rootVal = root.val;
            return isValid(root.left,leftTree) && isValid(root.right,leftTree);
        }
        else{
            return false;
        }
    }
}