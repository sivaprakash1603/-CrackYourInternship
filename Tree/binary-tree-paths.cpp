/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> paths;
    if(root==nullptr) return paths;
    stack<pair<TreeNode*,string>> st;
    st.push({root,to_string(root->val)});
    while(!st.empty()){
           auto [node,path]=st.top();
           st.pop();
            if(node->left == NULL && node->right == NULL) {
                paths.push_back(path);
            }
            if(node->right != NULL) {
                st.push({node->right, path + "->" + to_string(node->right->val)});
            }
            if(node->left != NULL) {
                st.push({node->left, path + "->" + to_string(node->left->val)});
            }}
            return paths;
    }
};
