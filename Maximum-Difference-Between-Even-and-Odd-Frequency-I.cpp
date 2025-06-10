class Solution {
public:
    int maxDifference(string s) {
        int n = s.size() ; 
        unordered_map<char , int>mp ; 
        for(int i = 0  ;i<n ; i++){
            mp[s[i]] ++ ; 
        }
        int mx = INT_MIN ;
        int mi = INT_MAX ;
        for(auto it:mp){
            if(it.second%2==1){
                mx = max(mx , it.second ) ; 
            }else if(it.second%2==0){
                mi = min(mi , it.second) ; 
            }
        }
        return mx-mi  ;


    }
};