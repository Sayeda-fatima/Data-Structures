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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *current=head;
        ListNode *next_next=head->next;
        while(next_next!=NULL){
            if(current->val==next_next->val)
                next_next=next_next->next;
            else{
                current->next=next_next;
                current=next_next;
                next_next=current->next;
            }
        }
        current->next=NULL;
        return head;
    }
};
