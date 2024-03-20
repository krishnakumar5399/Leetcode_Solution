class Solution {
public:
    bool checkIfPangram(string sentence) {
        char mapping[256] = {0} ;
        for(auto  ch : sentence){
            mapping[ch]++; 
        } 
        for(int i = 'a' ;i <='z' ;i++){
            if(mapping[i] ==0){
                return false;
            }
        }
        return true;
    }
};
