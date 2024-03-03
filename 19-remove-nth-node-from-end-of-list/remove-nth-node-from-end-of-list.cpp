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
        ListNode *temp=head;
        long long int l=0,c=0;
        while(temp!=NULL)
        {
            l+=1;
            temp=temp->next;
        }
        int d=l-n;
        if(d==0)
        {
            return head->next;
        }
        ListNode *curr=head;
        ListNode *prev=NULL;
        int i=0;
        while(curr!=NULL)
        {
            i++;
            if(i>d)
            {
                prev->next=curr->next;
                break;
            }
            prev=curr;
            curr=curr->next;
        }
        return head;
    }
};