class Solution {
public:
    bool isSubstringPresent(string s) {
        string rev = s ;
        reverse(rev.begin(),rev.end()) ;
        for(int i = 0 ;i<s.length()-1;i++){
            string temp;
            temp.push_back(s[i]);
            temp.push_back(s[i+1]);
            if(rev.find(temp) != string :: npos){
                return true ;
            }
        }
        return false ;
        
    }
};
