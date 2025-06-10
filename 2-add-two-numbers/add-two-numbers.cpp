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
        ListNode* t1 = l1 ;
        ListNode* t2 = l2 ; 
        ListNode* dn = new ListNode(-1) ; 
        ListNode* c = dn  ;
        int cr = 0 ;
        while(t1!=NULL || t2!=NULL){
            int sum = cr ; 
            if(t1){
                sum+=t1->val ;
            }
            if(t2){
                sum+=t2->val ; 
            }
            ListNode* nn = new ListNode(sum%10)  ;
            cr = sum/10 ; 
            c->next = nn ; 
            c = nn ; 
            if(t1){
                t1=t1->next ; 
            }
            if(t2){
                t2=t2->next ; 
            }
        }
        if(cr){
            ListNode* newn = new ListNode(cr) ; 
            c->next = newn ; 
            c = newn ; 
            c->next=NULL ; 
        }
        return dn->next ; 
    }
};