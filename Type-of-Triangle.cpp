class Solution {
public:
    string triangleType(vector<int>& nums) {
        int n = nums.size() ; 
        string ans = "none" ; 
        for(int i = 0 ; i<n-2 ; i++){
           if(nums[i]==nums[i+1] && nums[i]==nums[i+2]){
            if((nums[i]+nums[i+1]> nums[i+2]) && (nums[i+1]+nums[i+2]>nums[i]) && (nums[i]+nums[i+2]>nums[i+1]) ){
            ans = "equilateral" ; 
            }
           }else if(nums[i]==nums[i+1] || nums[i]==nums[i+2] || nums[i+1]==nums[i+2]){
            if((nums[i]+nums[i+1]> nums[i+2]) && (nums[i+1]+nums[i+2]>nums[i]) && (nums[i]+nums[i+2]>nums[i+1]) ){
            ans = "isosceles" ; 
            }
           }else if(nums[i]!=nums[i+1] && nums[i+1]!=nums[i+2] && nums[i]!=nums[i+2]){
            if((nums[i]+nums[i+1]> nums[i+2]) && (nums[i+1]+nums[i+2]>nums[i]) && (nums[i]+nums[i+2]>nums[i+1]) ){
            ans = "scalene" ; 
            }
           }
        }
        return ans ; 
    }
};