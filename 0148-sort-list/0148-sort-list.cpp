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

    ListNode* find_mid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* h1,ListNode* h2){

        if(h1==NULL){
            return h2;
        }
        if(h2==NULL){
            return h1;
        }

        if(h1->val>=h2->val){
            h2->next=merge(h1,h2->next);
            return h2;
        }
        else{
            h1->next=merge(h1->next,h2);
            return h1;
        }
    }

    ListNode* sortList(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* mid=find_mid(head);

        ListNode* Lhead=head;
        ListNode* Rhead=mid->next;

        mid->next=NULL;

        Lhead=sortList(Lhead);
        Rhead=sortList(Rhead);
        return merge(Lhead,Rhead);
    }
};