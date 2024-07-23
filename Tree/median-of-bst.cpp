/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function
// Function should return median of the BST
void inorder(vector<int>& arr,struct Node *root){
    if(!root){
        return;
    }
    if(root->left){
        inorder(arr,root->left);
    }
    arr.push_back(root->data);
    if(root->right){
        inorder(arr,root->right);
    }
}
float findMedian(struct Node *root)
{
      vector<int> ans;
      inorder(ans,root);
      int n=ans.size();
      if(n%2==0){
          return (float)(ans[n/2]+ans[(n/2) - 1])/2;
      }
      else{
          return ans[n/2];
      }
}

