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
    ListNode* mergeNodes(ListNode* head) {

        ListNode* zero=head;
        ListNode* temp=head->next;
        ListNode* nextNode=temp->next;
        int sum=0;

        while(temp!=NULL){
            sum+=temp->val;

            if(nextNode->val==0){
                temp->val=sum;
                zero->next=temp;
                temp->next=nextNode->next;

                sum=0;

                zero=temp;
                temp=nextNode->next;
                if(temp!=NULL){
                    nextNode=temp->next;
                }
            }
            else{
                temp=temp->next;
                nextNode=temp->next;
            }
        }
        
        return head->next;
    }
};