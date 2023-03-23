// https://leetcode.com/problems/remove-linked-list-elements

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
    public ListNode removeElements(ListNode head, int val) {
        
        ListNode ans = null, last = null;

        while( head != null){

            ListNode hd = remove(head,val);

            if(ans == null) {
                ans = hd;
                last = hd;
            }
            else {
                last.next = hd;
                last = hd;
            }

            if(hd != null)
                head = hd.next;
            else head = null;

        }

        return ans;
    }

    private ListNode remove(ListNode head,int val){
        while(head != null && head.val == val)
            head = head.next;

        return head;
    }

}