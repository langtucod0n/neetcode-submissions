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
        int cnt = 0;
        for(ListNode* p = head; p; p = p->next) {
            cnt++;
        }

        if (cnt == n) {
            head = head->next;
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;
        for(int i = 0; i < cnt - n; i++) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        return head;
    }
};