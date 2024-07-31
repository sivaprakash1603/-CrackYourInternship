class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(i<j){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        int i=0;
        int j=matrix[0].size()-1;
        while(i<j){
            for(int k=0;k<matrix.size();k++){
                swap(matrix[k][i],matrix[k][j]);
            }
            i++;
            j--;
        }
    }
};
