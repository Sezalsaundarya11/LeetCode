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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *x=head, *y=head, *t=head;
        

        //finding the ktn element from beginning
        while(k>1){
            x=x->next;
            t=t->next;
            k--;
        }

        //finding the kth element from end
        while(t->next){
            y=y->next;
            t=t->next;
        }

        //swap values
        int temp = x->val;
        x->val=y->val;
        y->val=temp;


        return head;


        


    }
};