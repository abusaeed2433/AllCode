// https://leetcode.com/problems/merge-two-sorted-lists

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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode ans = null, last = null;

        while(list1 != null && list2 != null){
            ListNode tmp;
            if(list1.val <= list2.val){
                tmp = list1;
                list1 = list1.next;
            }
            else{
                tmp = list2;
                list2 = list2.next;
            }
            
            if(ans == null) ans = tmp;
            else last.next = tmp;

            last = tmp;
        }

        if(list1 != null){
            if(ans == null) ans = list1;
            else last.next = list1;
        }

        if(list2 != null){
            if(ans == null) ans = list2;
            else last.next = list2;
        }


        return ans;
    }
}