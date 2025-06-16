class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size() ; 
        int mi = nums[0]  ; 
        int mx = -1 ; 
        for(int i = 0 ; i<n;i++){
            if(nums[i] > mi){
                mx = max(mx , nums[i]-mi) ; 
            }else{
                mi = nums[i] ; 
            }
        }
        return mx ; 
    }
};