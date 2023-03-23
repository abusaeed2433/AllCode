// https://leetcode.com/problems/merge-k-sorted-lists

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
    public ListNode mergeKLists(ListNode[] lists) {
        List<Integer> list = new ArrayList<>();
        for(ListNode head : lists){
            while(head != null){
                list.add(head.val);
                head = head.next;
            }
        }

        Collections.sort(list);
        if(list.isEmpty()) return null;
        ListNode head = new ListNode(list.get(0));
        ListNode last = head;
        for(int i=1; i<list.size();i++){
            last.next = new ListNode(list.get(i));
            last = last.next;
        }
        return head;
    }
}