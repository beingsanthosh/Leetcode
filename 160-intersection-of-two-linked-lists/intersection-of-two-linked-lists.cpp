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
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        int l1=0,l2=0;
        ListNode *temp1=head1;
        ListNode *temp2=head2;
        while(temp1!=NULL)
        {
            l1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            l2++;
            temp2=temp2->next;
        }
        int k=abs(l1-l2);
        if(l2>l1)
        {
            for(int i=0;i<k;i++)
            {
                head2=head2->next;
            }
        }
        else
        {
            for(int i=0;i<k;i++)
            {
                head1=head1->next;
            }
        }
        while(head1!=head2)
        {
            head1=head1->next;
            head2=head2->next;
        }
        return head1;

    }
};