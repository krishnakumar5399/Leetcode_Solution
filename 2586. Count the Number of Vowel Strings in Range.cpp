class Solution {
public:
    bool checkVowel(char ch){
        if(ch=='a' || ch =='e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false ;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0 ;
        for(int i=left ;i<=right ;i++){
            string s= words[i] ;
            if(checkVowel(s[0]) && checkVowel(s[s.length()-1]) == true ){
                count++;
            }
        }
        return count;
        
    }
};
