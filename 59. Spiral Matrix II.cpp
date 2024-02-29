class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>arr(n,vector<int>(n));
        int left = 0 ,right = n-1 ;
        int top = 0 , bottom = n-1 ;
        int direction = 0 ;
        int element = 1 ;
        while(top<=bottom && left <= right){
            // left to right.
            if(direction == 0){
                for( int i = left ;i<= right;i++){
                    arr[top][i] = element++;
                }
                direction = 1 ;
                top++;

            }
            else if (direction == 1){
                for(int i = top ;i<= bottom ;i++){
                    arr[i][right] = element++;
                }
                direction = 2;
                right--;

            }
            else if (direction == 2){
                for(int i = right ; i>= left;i--){
                    arr[bottom][i] = element++;
                }
                bottom--;
                direction = 3;

            }
            else if (direction == 3){
                for(int i = bottom ; i>=top ;i--){
                    arr[i][left] = element++;
                } 
                direction = 0;
                left++; 

            }

            
        }
        return arr;
        
    }
};
