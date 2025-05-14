class Solution {
    private:
    bool f(int ind , int r , int c , vector<vector<char>>&board , string &word , int rb , int cb){
        if(ind==word.size()){
            return true ; 
        }
        if(r<0 || c<0 || r>=rb || c>=cb || board[r][c]!=word[ind] || board[r][c]=='?'){
            return false ; 
        }
        char ch = board[r][c];
        board[r][c]='?' ; 
        bool t = f(ind+1 , r-1 , c ,board , word , rb , cb) ; 
        bool b = f(ind+1 , r+1 , c, board , word , rb , cb) ; 
        bool ri = f(ind+1 , r ,c+1 , board , word , rb , cb) ; 
        bool l = f(ind +1 , r ,c-1 , board , word , rb ,cb) ; 

        board[r][c] = ch ; 
        return t||b||ri|| l ;  

    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size() ;
        int m = board[0].size() ; 
        int ind = 0 ; 
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ;j++){
                if(board[i][j]==word[ind] && f(ind , i , j  , board , word , n, m ) ){
                    
                        return true ; 
                    
                }
            }
        }
        return false ; 
    
    }
};