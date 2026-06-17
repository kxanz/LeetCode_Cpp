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

    struct compare{
        bool operator()(ListNode* list1, ListNode* list2){
            return list1->val > list2->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue <ListNode*, vector<ListNode*>, compare> pq;

        for (auto list : lists) {
            if (list){
                pq.push(list);
            }
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;

        while (!pq.empty()){
            ListNode *temp = pq.top();
            pq.pop();
            current->next = temp;

            if (temp->next){
                pq.push(temp->next);
            }
            current = current->next;
        }    
        return dummy->next;
    }
};
