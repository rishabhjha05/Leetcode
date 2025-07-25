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
    ListNode* reverseList(ListNode* head) {
        //recursive approach
        // if(head==NULL|| head->next==NULL)
        //     return head;
        // ListNode* head2=reverseList(head->next);
        // head->next->next=head;
        // head->next=NULL;
        // return head2;
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *prev=head;
        ListNode *curr=head->next;
        ListNode *Next=head->next->next;
        while(Next!=NULL){
            curr->next=prev;
            prev=curr;
            curr=Next;
            Next=Next->next;
        }
        curr->next=prev;
        head->next=NULL;
        head=curr;
        return head;
    }
};