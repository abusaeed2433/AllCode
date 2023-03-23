// https://leetcode.com/problems/sum-root-to-leaf-numbers

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
    private StringBuilder sb = new StringBuilder();
    private int ans = 0;
    public int sumNumbers(TreeNode root) {
        dfs(root);
        return ans;
    }

    private void dfs(TreeNode root){
        if(root.left == null && root.right == null){
            sb.append(root.val);
            //System.out.println(sb.toString());
            ans += Integer.valueOf(sb.toString());
            sb.setLength(sb.length()-1);
            return;
        }
        sb.append(root.val);
        if(root.left != null) dfs(root.left);
        if(root.right != null) dfs(root.right);
        sb.setLength(sb.length()-1);
    }
}