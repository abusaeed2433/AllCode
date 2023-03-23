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
        
        ArrayList<Integer> num1 = new ArrayList<>();
        ArrayList<Integer> num2 = new ArrayList<>();

        while(l1 != null || l2 != null){
            if(l1 != null){
                num1.add(l1.val);
                l1 = l1.next;
            }
            if(l2 != null){
                num2.add(l2.val);
                l2 = l2.next;
            }
        }

        ListNode ans = null, last = null;
        int mx = Math.max(num1.size(),num2.size());
        int n1 = 0, n2 = 0, n, rem = 0;

        for(int i=0; i < mx; i++){
            if(i < num1.size()) n1 = num1.get(i);
            if(i < num2.size()) n2 = num2.get(i);

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