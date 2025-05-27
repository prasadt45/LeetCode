class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fz = 0 ; 
        int n = nums.size() ; 
        for(int i = 0  ; i<n ; i++){
            if(nums[i]==0){
                fz = i ; 
                break ; 
            }
        }
        int fxc = fz ; 
        for(int i = fz ; i<n ; i++){
            if(nums[i]!=0){
             swap( nums[fxc] ,  nums[i]) ; 
              fxc+=1 ; 
            }
        }
    }
};