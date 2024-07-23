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
    int getMinimumDifference(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<int> arr;
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            arr.push_back(node->val);
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
        }
        int min=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]-arr[i]<min)
                min=arr[j]-arr[i];
            }
        }
        return min;
    }
};
