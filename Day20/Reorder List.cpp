class Solution {
public:
    ListNode* reverse(ListNode* Head){
        
        ListNode* current = Head; 
        ListNode* temp = Head;
        ListNode *prev = NULL, *next = NULL; 
  
        while (current != NULL) {  
            next = current->next; 
            current->next = prev;  
            prev = current; 
            current = next; 
        } 
        temp = prev; 
        return temp;
    }
    void reorderList(ListNode* head) {
        if(head==NULL ||head->next==NULL)
            return ;
        ListNode* prev = head;
        ListNode* slow = head;
        ListNode* fast = head;
        int i=0;
        while(fast!=NULL and fast->next!=NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
            
        }
        if(fast){
            prev =slow;
            slow =slow->next;
        }
        prev->next =NULL;
        
        ListNode* rev = reverse(slow);
       ListNode* h1 = head, *h2 = rev, *p1, *p2;
        while(h1 && h2){
            p1 = h1->next;
            p2 = h2->next;
            h1->next = h2;
            h2->next = p1;
            h1 = p1;
            h2 = p2;
        }
    }
};
