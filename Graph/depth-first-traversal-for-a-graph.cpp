class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans,vis(V,0);
        dfs(ans,adj,vis,0);
        return ans;
    }
    void dfs(vector<int>& ans,vector<int> adj[],vector<int>&vis,int st){
        if(!vis[st]){
            vis[st]=1;
            ans.push_back(st);
            for(int i:adj[st]){
                dfs(ans,adj,vis,i);
            }
        }
    }
};
