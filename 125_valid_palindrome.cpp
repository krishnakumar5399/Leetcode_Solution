class Solution {
public:
   char upperToLower(char ch){
       if(ch >= 'A' && ch <= 'Z'){
           //ch = ch-'A'+'a';
           ch = ch + 32;
       }
       return ch ;
   }
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                ans.push_back(s[i]);
            }
            if(s[i]>= 'A' && s[i]<='Z'){
                char ch = upperToLower(s[i]);
                ans.push_back(ch);
            }
            if(s[i] >='0' && s[i] <='9'){
                ans.push_back(s[i]);
            }
        }
        if(ans.empty()) return true;

        int start = 0;
        int end  = ans.length()-1;
        while(start<=end){
            if(ans[start]==ans[end]){
                start++;
                end--;
            }
            else{
                return false; 
            }
        }
        return true ;
        
    }
};
