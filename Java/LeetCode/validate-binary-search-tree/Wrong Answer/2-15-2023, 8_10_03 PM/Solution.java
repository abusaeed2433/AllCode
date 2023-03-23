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
    private boolean isFirst = true;
    private int rootVal;
    public boolean isValidBST(TreeNode root) {
        if(isFirst){
            rootVal = root.val;
            isFirst = false;
        }
        if(root == null) return true;

        int cur = root.val;

        if( 
        (root.left == null || (root.left.val < cur && root.left.val < rootVal ))&&
        (root.right == null||(root.right.val > cur && root.right.val>rootVal) )
        ){
                return isValidBST(root.left) && isValidBST(root.right);
        }
        else{
            return false;
        }
    }
}