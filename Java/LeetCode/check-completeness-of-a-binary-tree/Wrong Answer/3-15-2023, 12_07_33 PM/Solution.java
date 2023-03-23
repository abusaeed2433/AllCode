// https://leetcode.com/problems/check-completeness-of-a-binary-tree

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
    public boolean isCompleteTree(TreeNode root) {
        return bfs(root);
    }

    private boolean bfs(TreeNode root){
        if(root == null ) return true;

        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);

        while(!q.isEmpty()){
            int size = q.size();
            int total = size;

            boolean hasFound = false;
            while(size-- > 0){

                TreeNode tmp = q.poll();
                if(hasFound && (tmp.left != null || tmp.right != null)){
                    return false;
                }

                if(tmp.left != null){
                    q.add(tmp.left);
                    total--;
                }
                else{
                    hasFound = true;
                }                

                if(tmp.right != null){
                    if(hasFound) return false;
                    q.add(tmp.right);
                    total--;
                }
                else{
                    hasFound = true;
                }         
            }
        }
        return true;
    }
}