class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int num = x ;
        int rev = 0 ;
        while(x){
            int rem = x % 10 ;
            rev += rem ;
            x /= 10 ;
        }
        if(num % rev==0) return rev;
        else return -1 ;
        
    }
};
