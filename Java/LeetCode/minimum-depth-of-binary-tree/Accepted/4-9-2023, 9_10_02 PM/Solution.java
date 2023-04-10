// https://leetcode.com/problems/minimum-depth-of-binary-tree

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
    private int ans = Integer.MAX_VALUE;
    public int minDepth(TreeNode root) {
        if(root == null) return 0;
        
        dfs(root,0);
        return ans;
    }

    private void dfs(TreeNode root, int d){
        if(root == null) return;
        if(root.left == null && root.right == null){
            ans = Math.min(ans,d+1);
            return;
        }
        
        dfs(root.left,d+1);
        dfs(root.right,d+1);
    }

}