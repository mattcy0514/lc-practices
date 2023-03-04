/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
        ListNode* lDummy = new ListNode();
        // lRes as the head of LL
        ListNode* lRes = lDummy;
        int carry = 0;
        while (true) {
            int sum = 0;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = (int) (sum / 10);
            sum = sum % 10;
            lDummy->val = sum;
            if (!l1 && !l2 && !carry)
                break;
            // init a new LN for the next if no l1, l2, carry
            lDummy->next = new ListNode();
            lDummy = lDummy->next;
        }
        return lRes;
    }
};
// @lc code=end

