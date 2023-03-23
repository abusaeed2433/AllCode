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
        int num1 = 0, num2 = 0, mul = 1;

        while(l1 != null || l2 != null){
            if(l1 != null){

                num1 += l1.val * mul;
                l1 = l1.next;
            }
            if(l2 != null){
                num2 += l2.val * mul;
                l2 = l2.next;
            }
            mul *= 10;
        }

        int sum = num1 + num2;
        //System.out.println(sum);
        ListNode head = null;
        ListNode last = null;
        if(sum == 0){
            head = new ListNode();
            head.val = 0;
        }
        while(sum != 0){
            ListNode var = new ListNode();
            var.val = sum%10;
            if(head == null){
                head = var;
            }
            else{
                last.next = var;
            }
            last = var;
            sum /= 10;
        }

        return head;
    }
}