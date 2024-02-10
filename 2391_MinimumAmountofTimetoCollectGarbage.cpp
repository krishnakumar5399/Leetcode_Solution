class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
           int pickupM = 0 ;
    int pickupP = 0 ;
    int pickupG = 0 ;

    int travelM = 0;
    int travelP = 0;
    int travelG = 0;

    int lastM = 0 ;
    int lastP = 0 ;
    int lastG = 0 ;

    //for calulating travel time and pickup time ;

    for(int i=0 ; i<garbage.size();i++){
        // create string for excess every index of vector of string ;
        string curr = garbage[i] ;

        for(int j=0; j<curr.length();j++){
            if(curr[j] == 'M'){
                pickupM++;
                lastM = i ;
            }
            else if(curr[j] == 'P'){
                pickupP++;
                lastP = i;
            }
            else if(curr[j] == 'G'){
                pickupG++;
                lastG = i ;
            }
        }
    }

    // for calculating travel time.
    int travelTime = 0 ;
    for(int i=0;i<lastP;i++){
        travelTime += travel[i] ;
    }

    for(int i=0;i<lastM ;i++){
        travelTime += travel[i] ;
    }

    for(int i=0;i<lastG ;i++){
        travelTime += travel[i] ;
    }
    
    int totalPickupTime = pickupG + pickupM + pickupP ;
    int totalTime = travelTime + totalPickupTime ;
    return totalTime ;


        
    }
};
