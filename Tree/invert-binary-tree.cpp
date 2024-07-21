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
    void invert(TreeNode* root){
        if(root!=NULL){
            if(root->left!=nullptr&&root->right!=nullptr){
                invert(root->left);
                invert(root->right);
                TreeNode* temp=root->left;
                root->left=root->right;
                root->right=temp;
            }
            else if(root->left!=nullptr){
                invert(root->left);
                root->right=root->left;
                root->left=nullptr;
            }
            else{
                invert(root->right);
                root->left=root->right;
                root->right=nullptr;
            }
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};
