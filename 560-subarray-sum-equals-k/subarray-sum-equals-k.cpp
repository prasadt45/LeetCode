class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int>mp ; 
        int n = nums.size() ; 
        int sum = 0 ; 
        int cnt = 0 ; 
        mp[0] =1  ;
        for(int i = 0 ; i<n ;i++){
            sum+=nums[i] ; 
           
            int rem = sum-k ; 
            if(mp.find(rem)!=mp.end())
            {
                cnt+=mp[rem] ; 
            }
                mp[sum]++ ; 
            
        }
        return cnt ; 
    }
};