class Solution {
private:
    vector<pair<int,int>> movements {{0,1},{0,-1},{1,0},{-1,0}};
    int n,m;
    bool isValid(int x,int y){
        return x>=0 && y>=0 && x<n && y<m;
    }
    void dfs(vector<vector<int>>& image, int sr, int sc, int initialColor,int newColor){
        image[sr][sc] = newColor;
        for(auto&movement: movements){
            int x = sr + movement.first, y = sc + movement.second;
            if(!isValid(x,y) || image[x][y]!=initialColor) continue;
            dfs(image,x,y,initialColor,newColor);
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor = image[sr][sc];
        n = image.size(),m = image[0].size();
        if(initialColor!=color)
            dfs(image,sr,sc,initialColor,color);
        return image;
    }
};
