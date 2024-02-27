class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string str;
        bool ans = false;
        for(int i = 0 ;i<words.size();i++){
            str += words[i] ;
            if(str == s){
                ans= true;
                break;
            }
        }
        return ans;
        
    }
};
