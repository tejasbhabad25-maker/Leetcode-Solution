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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;

        int ct=0;
        while(temp!=NULL){
            temp=temp->next;
            ct++;
        }
        if(ct%2!=0){
            ListNode* temp2=head;

            for(int i=0;i<(ct/2);i++){
                temp2=temp2->next;
            }
            return temp2;
        }
        else{
            ListNode* temp2=head;

            for(int i=0;i<(ct/2);i++){
                temp2=temp2->next;
            }
            return temp2;
        }

        return temp;
    }
};