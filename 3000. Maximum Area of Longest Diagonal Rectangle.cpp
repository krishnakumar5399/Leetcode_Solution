class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double digonal = 0;
        int area = 0 ;
        for(int i =0 ;i <dimensions.size();i++ ){
            int a = dimensions[i][0] ;
            int b = dimensions[i][1] ;
            double d  = sqrt(a*a + b*b) ;
             int Ar = a*b;
            if(digonal < d ){
                digonal = d ;
                area = Ar ;
               
            }
            else if(digonal == d && area < Ar){
                area = Ar;
            }
        }
        return area;
        
    }
};
