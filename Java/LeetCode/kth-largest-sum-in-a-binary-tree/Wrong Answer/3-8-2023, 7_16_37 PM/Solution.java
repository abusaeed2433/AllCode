// https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree

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
    public long kthLargestLevelSum(TreeNode root, int k) {
        List<Integer> sms = new ArrayList<>();        
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        //sms.add(root.val);
        
        while(!q.isEmpty()){
            int siz = q.size();
            int sm = 0;
            while(siz-- >0){
                TreeNode tmp = q.poll();
                sm += tmp.val;
                
                if(tmp.left != null) q.add(tmp.left);
                if(tmp.right != null) q.add(tmp.right);
            }
            sms.add(sm);
        }
        Collections.sort(sms);
        Collections.reverse(sms);
        // for(int n : sms){
        //     System.out.print(n+" ");
        // }
        if(k > sms.size()-1) return -1;
        return sms.get(k-1);
    }
}