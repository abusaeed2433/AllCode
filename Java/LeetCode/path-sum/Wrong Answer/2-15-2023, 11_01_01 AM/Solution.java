// https://leetcode.com/problems/path-sum

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
    int targetSum;
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if(root == null) return false;

        this.targetSum = targetSum;
        return isPathAvailable(root,0);
    }

    private boolean isPathAvailable(TreeNode root, int sum){
        if(root == null) return (sum == targetSum);
        
        sum += root.val;

        return isPathAvailable(root.left,sum) || isPathAvailable(root.right,sum);

    
    }

}