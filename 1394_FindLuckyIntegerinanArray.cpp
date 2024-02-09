class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans= -1 ;
        int count = 1 ;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
            else{
                if(count == arr[i]){
                    ans = arr[i] ;
                    count = 1 ;
                }
                else{
                    count = 1 ;
                }
            }
        }
        if(count == arr[arr.size()-1]) return arr[arr.size()-1];
        return ans;
        
    }
};
