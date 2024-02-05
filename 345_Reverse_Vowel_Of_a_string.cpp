class Solution {
public:
bool checkVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch == 'o' || ch =='u'){
        return true;
    }
     else if(ch == 'A' || ch=='E' || ch=='I' || ch=='O' || ch =='U'){
        return true;
    }
    return false;
}
    string reverseVowels(string s) {
        int i = 0 ;
        int j = s.length()-1;
        while(i<j){
            if(checkVowel(s[i])==true && checkVowel(s[j])==true ){
                swap(s[i],s[j]);
            
                    i++;
                    j--;
                
               
            }
            if(checkVowel(s[i]) == false){
                i++;
            }
            if(checkVowel(s[j]) == false){
                j--;
            }
            
        }
        return s;
        
    }
};
