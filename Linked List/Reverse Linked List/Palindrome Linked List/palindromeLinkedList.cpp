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
    private:
    ListNode *front=NULL;
public:
    bool palindromeCheck(ListNode* head){
        if(head==NULL)
            return true;
        if(!palindromeCheck(head->next))
            return false;
        if(front->val!=head->val)
            return false;
        front=front->next;
        return true;
    }
    bool isPalindrome(ListNode* head) {
        front=head;
        return palindromeCheck(head);
    }
};
