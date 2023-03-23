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
    
    private List<Integer> list = new ArrayList<>();

    public int minDiffInBST(TreeNode root) {
        traverse(root);
        return list.get(1)-list.get(0);
    }

    private void traverse(TreeNode root){
        if(root == null) return;    
        traverse(root.left);
        list.add(root.val);
        traverse(root.right);
    }

}