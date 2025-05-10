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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dn = new ListNode(-1) ; 
        ListNode* curr = dn ; 
        ListNode* t1 = l1 ;
        ListNode* t2 = l2 ; 
        int cry = 0 ; 
        while(t1!=NULL ||t2!=NULL){
            int sum = cry ; 
            if(t1) sum+=t1->val ; 
            if(t2) sum+=t2->val ; 
            ListNode* NN = new ListNode(sum%10) ; 
            cry= sum/10 ; 
            curr->next = NN ;
            curr=curr->next ; 
            if(t1) t1=t1->next ;
            if(t2) t2=t2->next ; 

        }
        if(cry){
            ListNode* NN = new ListNode(cry) ; 
            curr->next = NN ; 
        }
        return dn->next ; 
    }
};