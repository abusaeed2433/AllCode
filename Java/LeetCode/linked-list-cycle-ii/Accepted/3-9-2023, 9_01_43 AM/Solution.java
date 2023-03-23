// https://leetcode.com/problems/linked-list-cycle-ii

/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        Map<ListNode,Integer> map = new HashMap<>();

        while(head != null){
            if(head.next == null) return null;

            if(map.containsKey(head.next)){
                return head.next;
            }
            map.put(head,1);
            head = head.next;
        }

        return null;
    }
}