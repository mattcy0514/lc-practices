/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
    ListNode* rotateRight(ListNode* head, int k) {
        // if null, return null
        if (!head)
            return head;
        // make it as circular LL
        ListNode* lDummy = head;
        int length = 1;
        while (lDummy->next) {
            lDummy = lDummy->next;
            ++length;
        }
        lDummy->next = head;
        // traverse to its inverse
        length = length - k % length;
        while (length--) {
            // lDummy as prev to reduce mem
            lDummy = head;
            head = head->next;
        }
        // destruct the circular LL
        lDummy->next = nullptr;
        return head;

    }
};
// @lc code=end

