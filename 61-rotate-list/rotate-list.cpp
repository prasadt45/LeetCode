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
    ListNode* f(ListNode* temp , int l){
        int i = 1 ; 
        while(temp){ 
            if(i==l){
                return temp ; 
            }
            i++ ;
            temp=temp->next ; 
        }
        return temp ;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0){
            return head  ; 

        }
        ListNode* tail = head ; 
        int n =1 ;
        while(tail->next!=NULL){
            tail= tail->next ; 
            n++ ; 
        }
        if(k%n==0) return head ; 
        k = k%n ; 
        tail->next = head  ; 
        ListNode* nt = f(head , n-k) ; 
         head = nt->next  ; 
        nt->next =NULL ; 
        return head ; 

    }
};