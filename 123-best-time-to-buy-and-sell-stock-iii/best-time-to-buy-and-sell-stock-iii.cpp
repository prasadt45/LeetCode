class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ; 
        // think of tabulation ;
        // base case ? 
      vector<vector<int>>after(2 , vector<int>(3 , 0)) ; 
      vector<vector<int>>curr(2 , vector<int>(3 , 0)) ; 
    
        
        for(int i = n-1 ; i>=0 ; i--){
            for(int j = 0 ; j<=1 ;j++){
                for(int c = 1 ; c<=2 ; c++){
                    if(j==1){
                        curr[j][c] = max(
                            -prices[i] + after[0][c] , 
                            0 + after[1][c] 
                        ) ; 
                    }else{
                        curr[j][c] = max(
                            prices[i] +after[1][c-1] , 
                            0+after[0][c] 
                        ); 
                    }
                }
            }
            after =  curr ; 
        }
        return after[1][2] ; 

    }
};