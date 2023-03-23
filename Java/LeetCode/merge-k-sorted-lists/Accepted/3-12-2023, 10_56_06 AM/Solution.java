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
        List<ListNode> list = new ArrayList<>();
        for(ListNode head : lists){
            while(head != null){
                list.add(head);
                head = head.next;
            }
        }

        Collections.sort(list,new Comparator<ListNode>(){
            public int compare(ListNode nd1, ListNode nd2){
                return nd1.val - nd2.val;
            }
        });
        
        if(list.isEmpty()) return null;
        int n = list.size();
        for(int i=0; i<n-1;i++){
            list.get(i).next = list.get(i+1);
        }
        list.get(n-1).next = null;
        return list.get(0);
    }
}