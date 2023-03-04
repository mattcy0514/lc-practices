/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* lFast = head;
        ListNode* lSlow = head;
        while (true) {
            if (!lFast)
                return false;
            else if (!lFast->next)
                return false;
            lFast = lFast->next->next;
            lSlow = lSlow->next;
            if (lFast == lSlow)
                return true;
        }
    }
};
// @lc code=end

