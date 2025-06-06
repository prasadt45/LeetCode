class Solution {
    private:
    int f(int i, int k, vector<int>& arr, vector<vector<int>>& dp) {
	if (i == 0) {
		if (k == 0 && arr[0] == 0) return 2;
		if (k == 0 || arr[0] == k) return 1;
		return 0;
	}

	if (dp[i][k] != -1)
		return dp[i][k];

	int notPick = f(i - 1, k, arr, dp) ;
	int pick = 0;
	if (arr[i] <= k)
		pick = f(i - 1, k - arr[i], arr, dp);

	return dp[i][k] = (notPick + pick) ;
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
	vector<vector<int>> dp(n, vector<int>(dif + 1, -1));
	return f(n - 1, dif, arr, dp);
        
}
public:
    int findTargetSumWays(vector<int>& arr, int target) {
        int n = arr.size() ; 
        return cp(n , target , arr) ; 
    }
};