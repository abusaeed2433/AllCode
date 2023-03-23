// https://leetcode.com/problems/binary-tree-level-order-traversal

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
    public List<List<Integer>> levelOrder(TreeNode root) {
        List< List<Integer> > ans = new ArrayList<>();

        if(root == null) return ans;

        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);

        List<Integer> tmp = new ArrayList<>();
        tmp.add(root.val);

        ans.add(tmp);

        while(!queue.isEmpty()){
            
            tmp = new ArrayList<>();
            int size = queue.size();

            while(size-- > 0){            
                TreeNode nd = queue.remove();

                if(nd.left != null){
                    queue.add(nd.left);
                    tmp.add(nd.left.val);
                }

                if(nd.right != null){
                    queue.add(nd.right);
                    tmp.add(nd.right.val);
                }
            }

            if(!tmp.isEmpty())
                ans.add(tmp);
            
        }

        return ans;


    }
}