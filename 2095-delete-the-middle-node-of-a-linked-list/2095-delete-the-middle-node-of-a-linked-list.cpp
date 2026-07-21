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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            return NULL;
        }
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }

        ListNode* prev=head;
        int mid_idx=ceil((n-1)/2.0);

        // as prev is already at head then after loop it will point to 7 if i<mid_idx thus i<mid_idx-1
        for(int i=0;i<mid_idx-1;i++){
            prev=prev->next;
        }
        
        prev->next=prev->next->next;
        return head;
    }
};