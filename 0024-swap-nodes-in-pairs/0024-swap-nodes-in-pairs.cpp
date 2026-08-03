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

   ListNode* reverse(ListNode* head) {
       ListNode* prev = NULL;
       ListNode* curr = head;

        while (curr != NULL) {
           ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        return prev;
    }

   ListNode* getKthNode(ListNode* temp,int k){
        k--;
        while(k>0){
            temp=temp->next;
            k--;
        }
        return temp;
    }

    ListNode* swapPairs(ListNode* head) {

        // we will implement the same logic as reverse Nodes in K groups
        // just imagine here k=2

        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* curr=head;
        ListNode* prev=NULL;

        while(curr!=NULL){

           ListNode* kthNode=getKthNode(curr,2);

            if (kthNode == NULL) {
                if (prev!=NULL){
                    prev->next = curr;
                }
                break;
            }

            // as we need to reverse first 2 Nodes then stored the val of 3rd somewhere and point knode->next=NULL and then reverse
            
           ListNode* nextNode=kthNode->next;
            kthNode->next=NULL;

            // newNode will be theListNode of the reverse list
           ListNode* newHead=reverse(curr);

            // as we need to reverse the groups so head should be newHead
            if(curr==head){
                head=newHead;
            }
            else{
                prev->next=newHead;
            }

            prev=curr;
            curr=nextNode;
        }
        return head;
    }
};