class Solution {
public:
    string intToRoman(int num) {
        //     string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    //     string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    //     string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    //     string ths[]={"","M","MM","MMM"};
        
    //     return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    // }
     static vector<int> val{1000,900,500,400,100,90,50,40,10,9,5,4,1};
     static vector<string> sym{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

     string res="";
     for(int i=0;i<13;i++){
        if(num==0) break;
        int times=num/val[i];
        while(times--){
            res+=sym[i];
        }
        num=num%val[i];
     }
     return res;
        
    }
};
