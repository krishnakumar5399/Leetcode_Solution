class Solution {
public:
    void setZero(vector<vector<int>>&arr){
    int n = arr.size() ;
    int m = arr[0].size() ;
    vector<int>row(n,0) ;
    vector<int>col(m,0) ;
    for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<m;j++){
            if(arr[i][j]==0){
                row[i] = 1 ;
                col[j] = 1 ;
            }
        }
    }

    for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<m;j++){
            if(row[i] == 1 || col[j] == 1){
                arr[i][j] = 0 ;
            }
        }
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        setZero(matrix) ;
        
    }
};
