// https://leetcode.com/problems/remove-duplicates-from-sorted-list

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
    public ListNode deleteDuplicates(ListNode head) {

        if(head == null) return null;

        ListNode ans = head, tmp = head;
        int prev = head.val;
        head = head.next;

        while( head != null){
            if(head.val == prev){
                head = head.next;
                continue;
            }

            tmp.next = head;
            tmp = head;
            prev = head.val;
            head = head.next;        
        }

        tmp.next = null;

        return ans;
    }
}