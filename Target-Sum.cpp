class Solution {
    private:
    int f(int i, int k, vector<int>& arr, vector<vector<int>>& dp) {
\tif (i == 0) {
\t\tif (k == 0 && arr[0] == 0) return 2;
\t\tif (k == 0 || arr[0] == k) return 1;
\t\treturn 0;
\t}

\tif (dp[i][k] != -1)
\t\treturn dp[i][k];

\tint notPick = f(i - 1, k, arr, dp) ;
\tint pick = 0;
\tif (arr[i] <= k)
\t\tpick = f(i - 1, k - arr[i], arr, dp);

\treturn dp[i][k] = (notPick + pick) ;
}
int cp(int n, int d, vector<int> &arr) {
    
        int ts = 0 ;
        for(int i = 0 ; i<n ; i++){
            ts+=arr[i]  ; 
        }
        int dif = ts-d ; 
        
        if(dif<0 ){
            return 0 ; 
        }
        if( dif %2!=0){
            return  0 ; 
        }
        dif = dif/2 ; 
\tvector<vector<int>> dp(n, vector<int>(dif + 1, -1));
\treturn f(n - 1, dif, arr, dp);
        
}
public:
    int findTargetSumWays(vector<int>& arr, int target) {
        int n = arr.size() ; 
        return cp(n , target , arr) ; 
    }
};