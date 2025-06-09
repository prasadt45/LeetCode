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
        // if(head==NULL){
        //     return NULL ; 
        // }
        ListNode* fast = head ; 
        ListNode* sl = head ; 
        for(int i = 0 ; i<n ; i++){
            fast = fast->next ; 

        }
        if(fast==NULL){
            return head->next ;
        }

        while(fast->next!=NULL){
            sl=sl->next ; 
            fast = fast->next ; 

        }
        sl->next = sl->next->next ; 
        return head ;
    }
};