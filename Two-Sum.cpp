class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        map<int , int> mp ;
        int n = arr.size() ; 
        for(int i =0 ; i<n ; i++){
            int a = arr[i] ;
            int rem = target-a ; 
            if(mp.find(rem)!=mp.end()){
                return {mp[rem] , i } ;
            }
            mp[a] = i ; 

        }
        return {-1 , -1} ; 
    }
};