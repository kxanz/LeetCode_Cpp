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
    void reorderList(ListNode* head) {
         if (!head || !head->next) return;

        // ── Step 1: Find the middle ──────────────────────────────
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;        // moves 1 step
            fast = fast->next->next;  // moves 2 steps
        }
        // slow is now at the midpoint

        // ── Step 2: Reverse the second half ─────────────────────
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;
        slow->next = nullptr;         // sever the two halves

        while (curr) {
            ListNode* nxt = curr->next;
            curr->next    = prev;
            prev          = curr;
            curr          = nxt;
        }
        // prev = head of reversed second half

        // ── Step 3: Interleave the two halves ───────────────────
        ListNode* first  = head;
        ListNode* second = prev;

        while (second) {              // second half is always ≤ first in length
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;
            first->next    = second;  // point forward node to tail node
            second->next   = tmp1;    // point tail node to next forward node
            first          = tmp1;
            second         = tmp2;
        }
    }
};
