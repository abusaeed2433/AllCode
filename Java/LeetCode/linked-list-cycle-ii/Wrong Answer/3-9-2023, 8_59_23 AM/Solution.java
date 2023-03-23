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
        Map<Integer,ListNode> map = new HashMap<>();

        while(head != null){
            if(map.containsKey(head.val)){
                return map.get(head.val);
            }
            map.put(head.val,head);
            head = head.next;
        }

        return null;
    }
}