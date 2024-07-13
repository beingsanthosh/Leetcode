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
    ListNode *recursive(ListNode* prev,ListNode *curr)
    {
        if(curr!=NULL)
        {
        ListNode *head=recursive(curr,curr->next);
        curr->next=prev;
        return head;
        }
        else
        {
            return prev;
        }
    }
    ListNode* reverseList(ListNode* head) {
        return recursive(NULL,head);
    }
};