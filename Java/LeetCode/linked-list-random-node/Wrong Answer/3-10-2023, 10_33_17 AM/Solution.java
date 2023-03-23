// https://leetcode.com/problems/linked-list-random-node

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
class Solution {
    private ListNode head;
    private ListNode cur;
    public Solution(ListNode head) {
        this.head = head;
        cur = head;
    }
    
    public int getRandom() {
        if(cur == null){
            cur = head;
        }

        ListNode tmp = cur;
        cur = cur.next;
        return tmp.val;
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */