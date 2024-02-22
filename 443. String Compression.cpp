class Solution {
public:
    int compress(vector<char>& chars) {
       int p = chars[0] ;
       int index = 0 ;
       int count = 1 ;
       for(int i = 1 ;i<chars.size();i++){
           if(chars[i] == p){
               count++;
           }
           else{
               chars[index++] = p ;
               if(count>1){
                   int start = index ; // if integer has double digit that's why
                   while(count){
                        chars[index++] = count % 10 + '0' ; // integer ko string me badlne ke liye.
                        count /= 10 ;
                    }
                    reverse(chars.begin()+start , chars.begin()+index) ;
                }
                p = chars[i] ;
                count = 1 ;

            }
       }

        chars[index++] = p ;
               if(count>1){
                   int start = index ; // if integer has double digit that's why
                   while(count){
                        chars[index++] = count % 10 + '0' ; // integer ko string me badlne ke liye.
                        count /= 10 ;
                    }
                    reverse(chars.begin()+start , chars.begin()+index) ;
                }
                return index ;
      

        
    }
};
