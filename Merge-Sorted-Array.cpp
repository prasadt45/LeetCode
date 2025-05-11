class Solution {
public:
    void merge(vector<int>& arr1, int n, vector<int>& arr2, int m) {
        vector<int>ans ; 
         int i = 0 ; 
         int j = 0 ; 
         while(i<n && j<m){
         if(arr1[i]<=arr2[j]){
            ans.push_back(arr1[i]) ; 
            i++ ; 
         }else if(arr1[i]>arr2[j]){
            ans.push_back(arr2[j])  ;
            j++ ; 
         }
         }
         while(i<n){
             ans.push_back(arr1[i]) ; 
            i++ ; 
         }
         while(j<m){
             ans.push_back(arr2[j]) ; 
            j++ ; 
         }
        
        
       sort(ans.begin() , ans.end()) ; 
       arr1 = ans ; 
       
        
    }
};