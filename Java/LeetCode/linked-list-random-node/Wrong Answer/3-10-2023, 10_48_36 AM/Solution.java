// https://leetcode.com/problems/linked-list-random-node

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
    private List<Integer> list;
    private Random ran = new Random();

    public Solution(ListNode head) {
        Set<Integer> set = new HashSet<>();
        while(head != null){
            set.add(head.val);
            head = head.next;
        }
        list = new ArrayList<>(set);
    }
    
    public int getRandom() {        
        int i = ran.nextInt(list.size());

        return list.get(i);
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */