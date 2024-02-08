class Solution {
public:
    // for checking odd and even palindromic string .
    int expand(string s,int i,int j){
        int count = 0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count ;
    }
    int countSubstrings(string s) {
        int n = s.length() ;
        int totalCount = 0 ;

        for(int i = 0; i<n;i++){
            // for odd j= i+1
            int oddPalindrome = expand(s,i,i) ;
            int evenPalindrome = expand(s,i,i+1) ;
            totalCount = totalCount + oddPalindrome + evenPalindrome ; 
        }
        return totalCount ;
    }
};
