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
    
    bool hasPathSum(TreeNode* root, int targetSum) {
      if(!root)
      return false;
      stack<pair<TreeNode*,int>> st;
      st.push({root,root->val});
      while(!st.empty()){
        auto [Node,tot]=st.top();
        st.pop();
        if(!Node->left&&!Node->right&&targetSum==tot)
        return true;
        if(Node->left)st.push({Node->left,tot+Node->left->val});
        if(Node->right)st.push({Node->right,tot+Node->right->val});
      }
      return false;

    }
};
