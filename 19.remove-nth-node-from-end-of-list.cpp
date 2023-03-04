/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if head is null, return itself
        if (!head)
            return head;
        // use dummy to make slow run with same speed as fast do
        ListNode* lDummy = new ListNode();
        ListNode* lFast = head;
        ListNode* lSlow = lDummy;
        lSlow->next = head;

        while (n-- > 0)
            lFast = lFast->next;

        while (lFast) {
            lFast = lFast->next;
            lSlow = lSlow->next;
        }

        lSlow->next = lSlow->next->next;

        return lDummy->next;
    }
};
// @lc code=end

