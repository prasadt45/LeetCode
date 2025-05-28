class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0 ; 
        unordered_map<int , int>mp ; 
        int n = nums.size() ; 
        for(int i = 0 ; i<n ; i++){
            mp[nums[i]]++ ; 
        }
        for(auto it:mp){
            if(it.second>=2){
                ans = it.first ; 
            }
        }
        return ans ; 
    }
};