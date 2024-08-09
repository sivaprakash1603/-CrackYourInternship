/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* curr=head;
        unordered_map<Node*,Node*>mp;
        while(curr){
            mp[curr]=new Node(curr->val);
            curr=curr->next;
        }
        curr=head;
        while(curr){
            mp[curr]->next=mp[curr->next];
            mp[curr]->random=mp[curr->random];
            curr=curr->next;
        }
        return mp[head];
    }
};
