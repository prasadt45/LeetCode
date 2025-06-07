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
    ListNode* rll(ListNode* head){
       
        ListNode* prev = NULL ;
        ListNode* temp = head ; 
        while(temp!=NULL){
            ListNode* nn = temp->next ; 
            temp->next = prev ; 
            prev = temp ; 
            temp = nn ; 
        }
        return prev ; 
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true ; 
        }
        ListNode* fast = head ; 
        ListNode* slow = head ; 
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next ; 
            fast = fast->next->next ; 
        }
        ListNode* newh = (rll(slow->next));
        ListNode* h = head ; 
        ListNode* nh = newh ; 
        while(nh!=NULL){
            if(h->val!=nh->val) {
                rll(newh) ;
                return false ; 
            }
            h= h->next ; 
            nh = nh->next ; 
        }
        rll(newh) ;
        return true ; 
    }
};