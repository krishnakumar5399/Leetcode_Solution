class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        if(nums.size()==1) return nums[0] ;
        if(nums[0] < nums[nums.size()-1]) return nums[0];
        while(s<=e){
            int mid = s + (e-s)/2 ;

            if(mid+1 < nums.size() && nums[mid]>nums[mid+1]){
                return nums[mid+1] ;
            }
            else if (mid-1 >=0 && nums[mid]<nums[mid-1]){
                return nums[mid] ;
            }
            if(nums[s] == nums[mid] && nums[mid] == nums[e]){
                s++;
                e--;
                continue ;
            }
            
            if(nums[s]<=nums[mid]){
                if(nums[s]<=nums[mid] && nums[s]>=nums[e]){
                    s = mid +1 ;
                }
                else{
                    e = mid -1 ;
                }
            }
            else{
                if(nums[mid] <= nums[e] ){
                    e = mid -1;
                }
                else{
                    s= mid +1;
                }
            }

        }
        return nums[0];
        
    }
};
