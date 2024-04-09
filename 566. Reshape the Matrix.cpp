class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> newMat(r, vector<int> (c));
        if (m * n != r * c) {
            return mat;
        }
        
        int row = 0;
        int col = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                newMat[row][col++] = mat[i][j];

                if(col == c){
                    row++;
                    col = 0;
                }
            }
        }
        return newMat;
    }
};
