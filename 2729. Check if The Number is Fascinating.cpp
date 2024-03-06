class Solution {
public:
    void convert (int n ,vector<int>&ans) {
    while(n!=0){
        int rem = n%10;
        ans.push_back(rem);
        n /= 10 ;
    }
    
    }
    bool isFascinating(int n) {
        vector<int>ans;
        
        int a = n*2;
        int b = n*3 ;
        
        convert(n,ans);
        convert(a,ans);
        convert(b,ans) ;
       
        sort(ans.begin(),ans.end());
        if(ans[0]==0) return false ;
         for(int i = 0 ;i<ans.size();i++){
            if(ans[i]== ans[i+1]){
                return false;
            }
        }
        return true;
        
    }
};
