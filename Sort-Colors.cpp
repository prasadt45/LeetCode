class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0 ; 
        int m = 0 ; 
        int n = nums.size() ; 
        int h = n-1 ; 
        while(m<=h){
            if(nums[m]==2){
                swap(nums[m]  , nums[h]) ; 
                h-- ; 
            }else if(nums[m]==1){
               m++ ; 
            }else{
                swap(nums[m] , nums[l]) ; 
                l++ ; 
                m++ ; 
            }
        }
    }
};