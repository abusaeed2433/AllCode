// https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
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
    private final List<Integer> list = new ArrayList<>();
    public TreeNode sortedListToBST(ListNode head) {
        
        while(head != null){
            list.add(head.val);
            head = head.next;
        }

        if(list.isEmpty()) return null;
        int n = list.size();
        return bst(0,n-1);

    }

    private TreeNode bst(int l, int h){
        if(l > h) return null;
        int mid = (l+h)/2;
        TreeNode root = new TreeNode(list.get(mid));
        root.left = bst(l,mid-1);
        root.right = bst(mid+1,h);
        return root;
    }

}