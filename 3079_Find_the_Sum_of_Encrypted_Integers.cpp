class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0 ;
        for(int i = 0 ;i<nums.size();i++){
            int x = nums[i] ;
            int max = INT_MIN ;
            int count = 0 ;
            while(x){
                int rem = x % 10 ;
                count++ ;
                if(rem > max){
                    max = rem ;
                }
                x /= 10 ;
            }
            int num = 0 ;
            while(count--){
                num = num * 10 + max ;
            }
            sum += num ;
        }
        return sum ;
        
    }
};
