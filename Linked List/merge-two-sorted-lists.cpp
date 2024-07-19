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
    ListNode* mergeTwoLists(ListNode* List1, ListNode* List2) {
       ListNode *result = new ListNode(0);
       ListNode *track = result;
       while(List1||List2){
        if(List1&&List2){
            ListNode **small= List1->val < List2->val ? &List1 : &List2 ;
            track->next = (*small);
            *small = (*small)->next;
        }
        else{
            ListNode **valid = List1 ? &List1 : &List2;
            track->next = *valid;
            break;
        }
        track = track->next;
       }
       return result->next;
    }
};
