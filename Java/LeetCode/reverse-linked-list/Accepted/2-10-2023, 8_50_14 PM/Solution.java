// https://leetcode.com/problems/reverse-linked-list

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
    public ListNode reverseList(ListNode head) {
        ListNode ans = null, tmp;

        while( head != null){
            tmp = head.next;
            head.next = ans;
            ans = head;
            head = tmp;
        }

        return ans;
    }


}