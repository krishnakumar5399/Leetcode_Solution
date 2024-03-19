class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0 ;
        int s = 0 ;
        int e  = nums.size()-1 ;
        sort(nums.begin(),nums.end()) ;
        while(s<e){
            if(nums[s] + nums[e] < target){
                count += e-s;
                s++;
            }
            else{
                e--;
            }
        }
        return count ;
        
    }
};
