class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int d1Sum = 0 ;
        int d2Sum = 0 ;
        int n = mat.size() ;
        int m = mat[0].size() ;
        for(int i = 0 ;i<n;i++){
            for(int j = 0 ; j<m ;j++){
                if(i==j){
                    d1Sum += mat[i][j] ;
                }
                if((i+j) == (n-1)){
                    d2Sum += mat[i][j] ;
                }
            }
        }
        int totalSum = d1Sum + d2Sum ;
        if(n%2 != 0){
            totalSum -= mat[n/2][n/2] ;
        }
        return totalSum ;
        
    }
};
