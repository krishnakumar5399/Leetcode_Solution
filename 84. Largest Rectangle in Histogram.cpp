class Solution {
public:
   vector<int> nextSmallerElementIndex(vector<int> arr){
        vector<int> ans(arr.size()) ;
        stack<int> st ;
        st.push(-1) ;
        for(int i = arr.size()-1 ;i>=0 ;i--){
            int curr = arr[i] ;
            while(st.top() != -1 && arr[st.top()]>=curr){
                st.pop() ;
            }
            ans[i] = st.top();
            st.push(i) ;
        }
        return ans ;
    }
    vector<int> prevSmallerElementIndex(vector<int>arr){
        vector<int> ans(arr.size()) ;
        stack<int> st ;
        st.push(-1) ;
        for(int i = 0 ;i<arr.size();i++){
            int curr = arr[i] ;
            while(st.top() != -1 && arr[st.top()]>=curr){
                st.pop() ;
            }
            ans[i] = st.top() ;
            st.push(i) ;
        }
        return ans ;

    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> Area ;
        vector<int> next = nextSmallerElementIndex(heights) ;
        for(auto i:next ){
            cout<<i<<" ";
        }
        cout<<endl ;
        vector<int> prev = prevSmallerElementIndex(heights) ;
        for(int i= 0 ;i<prev.size();i++){
            cout<<prev[i]<<" " ;
        }
        // jaha jaha next smaller element me -1 hai waha waha size dal do.
        for(int i = 0 ;i<next.size() ;i++){
            if(next[i] == -1){
                next[i] = heights.size() ;
            }
        }
        for(int i = 0 ;i<heights.size();i++){
            int height = heights[i] ;
            int width = next[i] - prev[i] - 1 ;
            int area = height * width ;
            Area.push_back(area) ;
        }

        int maxi = INT_MIN ;
        for(int i = 0 ;i<Area.size();i++){
            if(Area[i] > maxi){
                maxi = Area[i] ;
            }    
        }
        return maxi ;
        
    }
};
