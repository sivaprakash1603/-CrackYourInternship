 class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
         vector<int> ans,vis(V,0);
        queue<int> q;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int i=q.front();
            ans.push_back(i);
            q.pop();
            for(int j:adj[i]){
                if(!vis[j]){
                q.push(j);
                vis[j]=1;}
            }
        }
        return ans;
    }
};
