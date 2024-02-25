class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        if(nums.size()%2 !=0) return false;
        sort(nums.begin(),nums.end());
        int count = 1 ;
        for(int i = 0 ;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                count++;
                if(count>2) return false;
            }
            
            else if(count>2){
                return false;
            }
            else{
                count = 1;
            }
            
        }
        return true;
        
    }
};
