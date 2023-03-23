// https://leetcode.com/problems/find-duplicate-subtrees

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
    private Map<String,Integer> map = new HashMap<>();
    private List<TreeNode> ans = new LinkedList<>();
    public List<TreeNode> findDuplicateSubtrees(TreeNode root) {
        traverse(root);
        return ans;
    }
    
    private String traverse(TreeNode root) {
        if (root == null) return "#";

        String lTree = traverse(root.left);
        String rTree = traverse(root.right);
        String tree = lTree + "," +root.val+ "," + rTree;

        int count = map.getOrDefault(tree, 0);            
        map.put(tree, count+1);
        if (count == 1) ans.add(root);
        return tree;
    }
    
}