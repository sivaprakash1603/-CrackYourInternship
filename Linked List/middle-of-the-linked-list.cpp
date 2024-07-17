class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n=1;
        ListNode* t;
        t=head;
        while(t->next!=nullptr){
        t=t->next;
        ++n;
        }
        t=head;
        for(int i=0;i<n/2;++i){
            t=t->next;
        }
        return t;


    }
};
