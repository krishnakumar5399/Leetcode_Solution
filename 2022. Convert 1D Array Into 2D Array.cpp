class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
      int size = original.size() ;
      vector<vector<int>>arr(m,vector<int>(n)) ;
      if(size != m*n) return {} ;
      int k = 0 ;
      for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            
            arr[i][j] = original[k++] ;
            
        }
      }
      return arr ;  
    }
};
};
