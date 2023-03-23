// https://leetcode.com/problems/add-two-numbers

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr = l1;
    vector<int> v1;
    while(ptr != nullptr){
        v1.push_back(ptr->val);
        ptr = ptr->next;
    }

    reverse(v1.begin(),v1.end());
    int num1 = 0;
    for(int i:v1){
        num1*=10;
        num1+=i;
    }

    ptr = l2;
    vector<int> v2;
    while(ptr != nullptr){
        v2.push_back(ptr->val);
        ptr = ptr->next;
    }

    reverse(v2.begin(),v2.end());

    int num2 = 0;
    for(int i:v2){
        num2*=10;
        num2+=i;
    }


    int num = num1 + num2;

    if(num==0){
        ListNode *ln = new ListNode(0);
        return ln;
    }


    ListNode *ans = new ListNode(num%10);
    num/=10;

    ListNode *last;
    last = ans;

    while(num){
        int rem = num%10;
        num /= 10;

        ListNode *tmp = new ListNode(rem);
        last->next = tmp;
        last = tmp;
    }
    return ans;
    }
};