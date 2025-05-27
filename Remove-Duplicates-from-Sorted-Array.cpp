class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind = 0 ; 
        int n = nums.size() ; 
        nums[ind] =  nums[0] ; 
        for(int i = 0 ; i<n ; i++){
            if(nums[i]!=nums[ind]){
               nums[ind+1] = nums[i] ; 
               ind+=1 ; 
            }
        }
        return (ind+1) ; 
    }
};