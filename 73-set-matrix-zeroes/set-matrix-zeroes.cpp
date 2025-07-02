class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size() ; 
        int m = matrix[0].size() ; 
        vector<int>rv(n , 1) ; 
        vector<int>cv(m ,1) ;
        for(int i =0 ; i<n ; i++){
            for(int j =0 ; j<m ; j++){
                if(matrix[i][j]==0){
                    rv[i] = 0 ; 
                    cv[j] = 0 ; 
                }
            }
        } 

        for(int i=0 ; i<n ; i++){
            for(int j =0 ; j<m ; j++){
                if(rv[i]==0){
                    matrix[i][j] = 0 ; 
                }
                if(cv[j]==0){
                    matrix[i][j] = 0 ; 
                }
            }
        }

        
    }
};