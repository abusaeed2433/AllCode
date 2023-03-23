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
    private long prev = Long.MIN_VALUE;
    private boolean ans = true;
    public boolean isValidBST(TreeNode root) {
        inOrder(root);
        return ans;
    }

    private void inOrder(TreeNode root){
        if(root == null) return;

        inOrder(root.left);
        if( root.val <= prev ){
            ans = false;
            return;
        }
        prev = root.val;
        inOrder(root.right);
    }

}