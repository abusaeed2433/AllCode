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
    //private int mn = Integer.MAX_VALUE, mx = Integer.MIN_VALUE;

    public boolean isBalanced(TreeNode root) {
        if(root == null) return true;

        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);

        while(!q.isEmpty()){
            TreeNode tmp = q.poll();

            if(Math.abs(dfs(tmp.left,0) - dfs(tmp.right,0)) > 1) return false;
            if(tmp.left != null) q.add(tmp.left);
            if(tmp.right != null) q.add(tmp.right);
        }

        return true;
    }

    private int dfs(TreeNode root, int d){
        
        if(root == null) return d;
        if(root.left == null && root.right == null){
            return d+1;
        }
        
        return Math.max(dfs(root.left,d+1), dfs(root.right,d+1));
    }

}