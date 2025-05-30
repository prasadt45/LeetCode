class Solution {
    private:
    int f(int i , int j1 , int j2 , int n , int m , vector<vector<int>>&grid , vector<vector<vector<int>>>&dp){
        if(j1>=m || j1<0 ||j2>=m || j2<0){
            return -1e9 ; 
        }

        if(i==n-1){
            if(j1==j2){
                return grid[i][j1] ; 
            }else{
                return grid[i][j1] + grid[i][j2] ; 
            }
        }
        if(dp[i][j1][j2]!=-1){
            return dp[i][j1][j2] ; 
        }

        int maxi= -1e9 ; 
        for(int x = -1 ; x<=1 ; x++){
            for(int y = -1 ; y<=1 ; y++){
                if(j1==j2){
                    int value = grid[i][j1] + f(i+1 , j1+x , j2+y , n , m , grid , dp) ; 
                    maxi = max(maxi , value) ; 
                }else{
                    int value = grid[i][j1]+grid[i][j2] + f(i+1 , j1+x , j2+y , n ,m , grid , dp) ; 
                    maxi = max(maxi , value) ; 
                }
            }
        }
        dp[i][j1][j2] = maxi ; 
        return maxi ; 
    }
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int n =grid.size() ; 
        int m = grid[0].size() ; 
        vector<vector<vector<int>>>dp(n , vector<vector<int>>(m , vector<int>(m , -1))) ; 
        int ans = f(0 , 0 , m-1 , n ,  m , grid , dp)  ; 
        return max(0 ,ans) ; 
    }
};