// https://leetcode.com/problems/symmetric-tree

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
    List<Integer> ans = new ArrayList<>();
    List<Integer> ans2 = new ArrayList<>();
    public boolean isSymmetric(TreeNode root) {

        if(root == null) return true;

        preOrder(root.left);
        postOrder(root.right);
        
        if(ans.size() != ans2.size()) return false;

        int i=0;
        while(i<ans.size()){
            if(ans.get(i) != ans2.get(i)) return false;
            i++;
        }

        return true;    
    }
    
    private void preOrder(TreeNode root){
        if(root == null){
            ans.add(null);
            return;
        }
        ans.add(root.val);
        preOrder(root.left);
        preOrder(root.right);
    }

    private void postOrder(TreeNode root){
        if(root == null){
            ans2.add(null);
            return;
        }

        ans2.add(root.val);
        postOrder(root.right);
        postOrder(root.left);
    }

}