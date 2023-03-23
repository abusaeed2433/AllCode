// https://leetcode.com/problems/minimum-distance-between-bst-nodes

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
    public int minDiffInBST(TreeNode root) {
        traverse(root,root.left);
        traverse(root,root.right);
        return ans;
    }

    private void traverse(TreeNode prev, TreeNode root){
        if(root == null) return;
        ans = Math.min( Math.abs(root.val-prev.val), ans );

        traverse(root, root.left);
        traverse(root,root.right);
    }

}