/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    int difference(ListNode* head1, ListNode* head2) {

        int n1 = 0, n2 = 0;

        while(head1!=NULL || head2!=NULL){

            if(head1!=NULL){
                n1++;
                head1=head1->next;
            }
            if(head2!=NULL){
                n2++;
                head2=head2->next;
            }
        }
        return n1-n2;
    }

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        int diff=difference(headA,headB);
        ListNode* i=headA;
        ListNode* j=headB;

        // i<0 => n2>n1
        if(diff<0){
            while(diff<0){
                j=j->next;
                diff++;
            }
        }
        else{
            while(diff>0){
                i=i->next;
                diff--;
            }
        }

        while(i!=NULL && j!=NULL){
            if(i==j){
                return i;
            }
            i=i->next;
            j=j->next;
        }
        return NULL;
    }
};
