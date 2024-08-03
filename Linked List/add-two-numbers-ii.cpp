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
        stack<int>n1,n2;
        while(l1||l2){
            if(l1){
                n1.push(l1->val);
                l1=l1->next;
            }
            if(l2){
                n2.push(l2->val);
                l2=l2->next;
            }
        }
        int carry=0;
        ListNode* t=NULL;
        while(!n1.empty()||!n2.empty()||carry){
            if(!n1.empty()){
                carry+=n1.top();
                n1.pop();
            }
            if(!n2.empty()){
                carry+=n2.top();
                n2.pop();
            }
            ListNode* temp=new ListNode(carry%10);
            carry/=10;
            temp->next=t;
            t=temp;
        }
        return t;
    }
};
