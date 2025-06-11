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
    ListNode* swapPairs(ListNode* head) {
                if(head==NULL || head->next==NULL){
            return head ; 
        }
        ListNode* dn = new ListNode(-1) ; 
        ListNode* temp = head ; 
        ListNode* prev = dn ; 
        while(temp && temp->next){
            ListNode* f = temp ;
            ListNode* s = temp->next ; 
            prev->next=s  ;
            f->next=s->next ;
            s->next=f ; 

            prev = f ; 
            temp=f->next ; 



        }
        return dn->next ; 
    }
};