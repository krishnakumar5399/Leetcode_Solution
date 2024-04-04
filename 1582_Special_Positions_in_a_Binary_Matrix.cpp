class Solution {
public:
    bool countOne(vector<vector<int>>& mat , int ro, int col){
        int n = mat.size() ;
        int m = mat[0].size() ;
        int count = 0 ;
        for(int i = 0;i<n;i++){
            if(mat[i][col] == 1){
                count++;
            }
        }
        if(count>1) return false ;
        for(int i = 0 ;i<m ;i++){
            if(mat[ro][i] == 1){
                count++;
            }
        }
        if(count == 2) return true;
        return false;

    }
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size() ;
        int m = mat[0].size() ;
        int count = 0 ;
        for(int i = 0 ;i<n;i++){
            for(int j = 0 ;j<m ;j++){
                if(mat[i][j] == 1){
                    if(countOne(mat,i,j)){
                        count++;
                    }
                }
            }
        }
        return count ;
        
    }
};
