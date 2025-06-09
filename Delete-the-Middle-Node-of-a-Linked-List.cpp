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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL|| head->next==NULL){
            return NULL ; 
        }
        ListNode* f = head ; 
        ListNode* s = head ; 
        ListNode* ps = head ; 
        while(f!=NULL && f->next!=NULL){
            ps = s ; 
            s=s->next ; 
            f= f->next->next ; 
        }
        ps->next = ps->next->next ; 
        return head ; 
    }
};