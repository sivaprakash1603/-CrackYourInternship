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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
    if(!root1&&!root2)
    return NULL;
    int val=0;
    TreeNode* Node=new TreeNode();
    if(!root2){
    val+=root1->val;
    Node->left=mergeTrees(root1->left,nullptr);
    Node->right=mergeTrees(root1->right,nullptr);}
    if(!root1){
    val+=root2->val;
    Node->left=mergeTrees(nullptr,root2->left);
    Node->right=mergeTrees(nullptr,root2->right);}
    if(root1&&root2){
    Node->left=mergeTrees(root1->left,root2->left);
    Node->right=mergeTrees(root1->right,root2->right);
    val=root1->val+root2->val;}
    Node->val=val;
    return Node;
    }
};
