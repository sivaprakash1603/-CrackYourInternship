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
        int carry=0;
        ListNode* head=new ListNode();
        ListNode* t1=head;
        while(l1||l2||carry){
            if(l1&&l2){
                carry+=l1->val+l2->val;
                l1=l1->next;
                l2=l2->next;
            }
            else if(l1){
                carry+=l1->val;
                l1=l1->next;
            }
            else if(l2){
                carry+=l2->val;
                l2=l2->next;
            }
            ListNode* temp=new ListNode(carry%10);
            carry/=10;
            t1->next=temp;
            t1=temp;
        }
        return head->next;
    }
};
