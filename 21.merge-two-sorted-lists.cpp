/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* lDummy = new ListNode();
        ListNode* lPrev = lDummy;
        while (list1 && list2) {
            if (list1->val < list2->val) {
                lPrev->next = list1;
                list1 = list1->next;
            } else {
                lPrev->next = list2;
                list2 = list2->next;
            }
            lPrev = lPrev->next;
        }
        if (!list1) {
            lPrev->next = list2;
        } else if (!list2) {
            lPrev->next = list1;
        }
        return lDummy->next;
    }
};
// @lc code=end

