class Solution{
public:
    void floodfill(vector<vector<char>>& mat,int i,int j,int m,int n){
        if(i<0||i>=m||j<0||j>=n){
            return;
        }
        if(mat[i][j]!='-'){
            return;
        }
        mat[i][j]='O';
        floodfill(mat,i+1,j,m,n);
        floodfill(mat,i,j+1,m,n);
        floodfill(mat,i-1,j,m,n);
        floodfill(mat,i,j-1,m,n);
        
    }
    vector<vector<char>> fill(int m, int n, vector<vector<char>> mat)
    {
     vector<vector<char>> mat1(m,vector<char>(n));
     for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
             if(mat[i][j]=='O')
             mat1[i][j]='-';
             else
             mat1[i][j]='X';
         }
     }
     for(int i=0;i<m;++i){
         if(mat1[i][0]=='-'){
             floodfill(mat1,i,0,m,n);
         }
     }
      for(int i=0;i<n;++i){
         if(mat1[0][i]=='-'){
             floodfill(mat1,0,i,m,n);
         }
     }
      for(int i=0;i<m;++i){
         if(mat1[i][n-1]=='-'){
             floodfill(mat1,i,n-1,m,n);
         }
     }
      for(int i=0;i<n;++i){
         if(mat1[m-1][i]=='-'){
             floodfill(mat1,m-1,i,m,n);
         }
     }
     for(auto& i:mat1){
         for(auto& j:i){
             if(j=='-'){
                 j='X';
             }
         }
     }
     return mat1;
    }
    
