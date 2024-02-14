questions link :- https://leetcode.com/problems/rearrange-array-elements-by-sign/description/?envType=daily-question&envId=2024-02-14

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     vector<int>positive ;
     vector<int>negative ;
     vector<int>ans ;
     for(int i=0;i<nums.size();i++){
         if(nums[i]>0){
            positive.push_back(nums[i]) ;
         }
         else{
            negative.push_back(nums[i]) ;
        }
     }
     for(int i = 0;i<positive.size();i++){
        ans.push_back(positive[i]) ;
        ans.push_back(negative[i]) ;
     }
     return ans;



        
    }
};
