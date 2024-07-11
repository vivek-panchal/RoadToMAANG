class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1){
            return head;
        }

        ListNode* temp=new ListNode(0);
        temp->next=head;

        ListNode* curr=temp, *nexx=temp, *pre=temp;
        int count=0;

        while(curr->next!=NULL){
            curr=curr->next;
            count++;
        }

        while(count>=k){
            curr=pre->next;
            nexx=curr->next;

            for(int i=1;i<k;i++){
                curr->next=nexx->next;
                nexx->next=pre->next;
                pre->next=nexx;
                nexx=curr->next;
            }
            pre=curr;
            count-=k;
        }
        return temp->next;
    }
};
