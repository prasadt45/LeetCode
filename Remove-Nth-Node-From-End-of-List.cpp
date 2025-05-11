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
    ListNode* removeNthFromEnd(ListNode* head, int K) {
           ListNode* f = head ; 
       ListNode* s = head ; 
   for(int i = 0 ; i<K ; i++){
       f=f->next ; 
   }
   if (f == NULL)
        return head->next;

  
   while(f->next!=NULL)
   { 
       s=s->next ;
       f=f->next ; 
   }
   s->next=s->next->next ; 
   return head ; 
    }
};