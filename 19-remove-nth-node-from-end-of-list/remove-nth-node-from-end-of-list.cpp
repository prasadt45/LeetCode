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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0  ; 
        if(head==NULL ){
            return  NULL ; 
        }
        ListNode* temp = head ; 
        while(temp){
            cnt++ ; 
            temp=temp->next ; 
        }
        if(cnt==n){
            ListNode*  nh = head->next ; 
            //free(head) ; 
             return nh ; 
        }
        int no  = cnt-n  ; 
        temp = head  ; 
        while(temp){
          no-- ; 
            if(no==0){
                temp->next = temp->next->next ; 
                break ; 
            }
              
            temp=temp->next ; 
        }
        return head ; 
    }
};