class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size() ; 
        int ans = -1 ; 
        unordered_map<int , int>mp ; 
        for(int i =0 ; i<n ; i++){
              mp[arr[i]]++ ; 
        }

        for(auto it : mp){
            if(it.second==it.first){
                ans = max(ans , it.first) ; 
            }
        }

        return ans ; 
    }
};