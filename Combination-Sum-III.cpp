class Solution {
    private:
    void f(int i , vector<int>&ds , int s, vector<int>&arr , vector<vector<int>>&ans , int k , int h ){
        int n = arr.size() ; 
        if(i==n){
            if(ds.size()==k){
                if(s==h){
                    ans.push_back(ds) ; 
                    
                }
            }
            return  ;
        }
        ds.push_back(arr[i]) ; 
        s=s+arr[i] ; 
        f(i+1 , ds , s , arr ,ans , k , h) ; 
        ds.pop_back() ; 
        s=s-arr[i] ; 
         f(i+1 , ds , s , arr ,ans , k , h) ; 
    }
public:
    vector<vector<int>> combinationSum3(int k, int h) {
        vector<int>arr = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 ,9} ; 
        vector<int>ds ; 
        vector<vector<int>>ans ; 
        f(0 , ds , 0  , arr ,ans , k  ,h) ; 
        return ans ; 

    }
};