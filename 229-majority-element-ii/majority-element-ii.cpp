class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size() ; 
        int ele = n/3  ; 
        unordered_map<int , int >mp ; 
        vector<int>ve ; 
        for(int i =0 ; i<n ; i++){
            mp[nums[i]]++ ; 
        }
        for(auto it:mp){
            if(it.second > ele){
                ve.push_back(it.first) ; 
            }
        }
        return ve ; 
    }
};