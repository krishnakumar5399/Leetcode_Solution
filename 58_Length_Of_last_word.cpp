class Solution {
public:
    int lengthOfLastWord(string s) {

        int x=0;
        int count = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]== ' ' && x == 1)
                break;
            else if(s[i]!=' '){
                x=1;
                count++;
            }
        }
        return  count; 
    }
};
