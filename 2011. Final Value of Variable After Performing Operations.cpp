class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0 ;

        for(auto s : operations){
            string temp = s ;
            for(int i=0;i<temp.length();i++){
                if(temp[i]== '-'){
                    count--;
                }
                if(temp[i]=='+'){
                    count++;
                }
            }

        }
        return count/2 ;
        
    }
};
