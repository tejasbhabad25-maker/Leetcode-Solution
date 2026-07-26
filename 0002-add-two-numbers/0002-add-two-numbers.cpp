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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;

        int c=0;
        while(l1!=NULL || l2!=NULL || c!=0){
            int sum=0;

            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            // if there is carry then add it to sum
            sum+=c;

            // carry for next operation
            c=sum/10;

            // if sum = 19  then 1 will carry i.e sum/10 and 9 should be the sum which is sum%10
            ListNode* ans=new ListNode(sum%10);
            temp->next=ans;
            temp=temp->next;
        }
        // as the dummy start from -1 we need to return it's next which is actual head;
        return dummy->next;
    }
};