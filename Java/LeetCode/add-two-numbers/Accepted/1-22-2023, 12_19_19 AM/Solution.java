// https://leetcode.com/problems/add-two-numbers

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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
        
        int n1 = 0, n2 = 0, rem = 0, n;

        ListNode ans = null, last = null;

        while(l1 != null || l2 != null){
            if(l1 != null){
                n1 = l1.val;
                l1 = l1.next;
            }
            if(l2 != null){
                n2 = l2.val;
                l2 = l2.next;
            }

            n = n1 + n2 + rem;
            
            ListNode tmp = new ListNode();
            tmp.val = n%10;

            if( ans == null)
                ans = tmp;
            else
                last.next = tmp;
            last = tmp;
            rem = n/10;
            n1 = n2 = 0;
        }

        if(rem != 0){
            ListNode tmp = new ListNode();
            tmp.val = rem;
            last.next = tmp;
        }
        return ans;
    }
}