// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal

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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        if(root == null) return new ArrayList<>();

        List< List<Integer> > list = new ArrayList<>();
        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);
        
        List<Integer> tmp = new ArrayList<>();
//        tmp.add(root.val);
        boolean rightToLeft = false;

        while(!queue.isEmpty()){
            int size = queue.size();

            tmp = new ArrayList<>();

            while(size-- >0){
                TreeNode nd = queue.remove();
                if(nd == null) continue;
                queue.add(nd.left);
                queue.add(nd.right);
                tmp.add(nd.val);
            }
            if(rightToLeft){
                Collections.reverse(tmp);
            }
            rightToLeft = !rightToLeft;
            if(!tmp.isEmpty()) list.add(tmp);
        }
        return list;
    }
}