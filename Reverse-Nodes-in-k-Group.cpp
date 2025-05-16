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
 ListNode* reverselist(ListNode* head){
     ListNode* prev = NULL ;
     ListNode* temp = head ; 
     while(temp){
         ListNode* f = temp->next ;
         temp->next=prev ; 
         prev= temp ; 
         temp=f ;

     }
     return prev ; 
 }
 ListNode* findk(ListNode* temp , int k ){
     k-=1 ;
   
     while(temp != NULL && k>0){
         temp=temp->next ; 
         k-- ; 
     }
     return temp ; 
 }

    ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* temp = head ;
    ListNode* prev = NULL ; 
    while(temp){
    ListNode* kn = findk(temp, k) ; 
    if(kn==NULL){
      if (prev) {
        prev->next = temp;
      }
        break ;
    }
    ListNode* nn = kn->next ; 
    kn->next= NULL ; 
    reverselist(temp) ; 
    if(temp==head){
        head=kn ;
    } else {
        prev->next = kn;
    }
    prev = temp;
    temp = nn;
    }
    return head;
}
    
};