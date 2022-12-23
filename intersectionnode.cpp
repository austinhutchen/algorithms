

  struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // at intersection point, next is the same for both nodes
     ListNode *currentA=headA;
     ListNode *currentB=headB;
     while(currentA!=NULL&&currentB!=NULL){
       if(currentA->next->val==currentB->next->val){
         return currentA->next;
       }
         currentA=currentA->next;
         currentB=currentB->next;
     }
      
      return NULL;
      
      
    }
};