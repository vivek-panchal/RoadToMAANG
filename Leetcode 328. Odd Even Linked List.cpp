class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        //0 or 1 nodes
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        //2 or more nodes
        ListNode* start = head;
        ListNode* end = head->next;
        ListNode* temp = end;
        
        while(start->next != NULL){
            start->next = end->next;
            
            if(start->next != NULL){
                end->next = start->next->next;
            }
            else {
                end->next = NULL;
            }
            
            if(start->next != NULL){
                start = start->next;
            }
            end = end->next;
        }
        
        start->next = temp;
        
        return head;
        
    }
};
