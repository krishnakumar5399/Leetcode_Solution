class Solution {
public:
    string largestGoodInteger(string num) {
        string s = "" ;
        int count = 1 ;
        for(int i = 0 ;i<num.length()-1;i++){
            if(num[i]==num[i+1]){
                count++;
            }
            else{
                count = 1;
            }
            if(count == 3){
                if(s.empty()){
                    s = num.substr(i-1,3);
                }
                else if(s[0]<num[i]){
                   s = num.substr(i-1,3); 
                }
                count = 1 ;
            }
        }
        return s;
        
    }
};
