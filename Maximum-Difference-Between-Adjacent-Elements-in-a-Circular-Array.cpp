class Solution {
public:
    int maxAdjacentDistance(vector<int>& arr) {
        int n = arr.size() ; 
        int ans = 0 ;  
        for(int i = 0 ; i<n-1 ; i++){
            int dif = abs(arr[i] - arr[i+1]) ; 
            ans = max(ans , dif) ; 
        }
        int ed = abs(arr[0] - arr[n-1]) ; 
        ans = max(ans , ed) ; 
        return ans ; 
    }
};