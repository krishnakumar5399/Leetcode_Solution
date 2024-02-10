class Solution {
public:
    void createUpdateMapping(string &s){
        // creation of mapping 
        char start = 'a' ;
        char mapping[300] = {0};
        for(auto ch : s){
            if(mapping[ch] == 0){
                mapping[ch] = start ;
                start++;
            }
        }

        // update string 
        for(int i=0;i<s.length();i++){
            char ch = s[i] ;
            s[i] = mapping[ch] ;
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        createUpdateMapping(pattern) ;
        for(int i=0 ; i<words.size();i++){
            string temp = words[i] ;
            createUpdateMapping(temp) ;
            if(temp == pattern){
                ans.push_back(words[i]) ;
            }
        }
        return ans ;
        
    }
};
