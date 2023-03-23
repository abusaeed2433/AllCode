// https://leetcode.com/problems/two-sum-iv-input-is-a-bst

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
    
    private Map<Integer,Boolean> map = new HashMap<>();
    private int k;

    public boolean findTarget(TreeNode root, int k) {
        if(root == null) return false;        
        this.k = k;
        return traverse(root);
    }

    private boolean traverse(TreeNode root){
        if(root == null) return false;

        if(map.containsKey(k-root.val)) return true;

        map.put(root.val,true);

        return traverse(root.left) || traverse(root.right);
    }

}