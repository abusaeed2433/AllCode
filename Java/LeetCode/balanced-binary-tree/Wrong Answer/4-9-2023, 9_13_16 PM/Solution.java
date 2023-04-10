// https://leetcode.com/problems/balanced-binary-tree

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
    private int mn = Integer.MAX_VALUE, mx = Integer.MIN_VALUE;

    public boolean isBalanced(TreeNode root) {
        if(root == null) return true;
        dfs(root,0);
        return (mx - mn) <= 1;
    }

    private void dfs(TreeNode root, int d){
        if(root == null) return;
        if(root.left == null && root.right == null){
            mn = Math.min(mn,d+1);
            mx = Math.max(mx,d+1);
            return;
        }
        
        dfs(root.left,d+1);
        dfs(root.right,d+1);
    }

}