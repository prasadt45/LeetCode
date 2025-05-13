class Solution {
    private:
    bool safe(int r , int c , vector<string>&board , int &n){
        int dr = r ; 
        int dc = c ; 
        while(r>=0 && c>=0){
            if(board[r][c]=='Q'){
                return false ;
            }
            r-- ; 
            c-- ;
        }
        r=dr ; 
        c=dc ; 
        while(c>=0){
            if(board[r][c]=='Q'){
                return false ;
            }
            c-- ; 
        }
        r=dr  ; 
        c=dc ; 
        while(r<n && c>=0){
           if(board[r][c]=='Q'){
                return false ;
            }
            r++ ; 
            c-- ; 
        }
        return true ;

    } 
    void f(int ind , vector<string>&board , vector<vector<string>>&ans , int &n){
        if(ind==n){
            ans.push_back(board) ; 
            return ; 
        }
        for(int i = 0 ; i<n ; i++){
            if(safe(i , ind , board , n)){
                board[i][ind]='Q';
                f(ind+1 , board , ans , n) ; 
                board[i][ind]='.' ; 
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n) ; 
        vector<vector<string>>ans ;
        string s(n , '.') ; 
        for(int i = 0 ; i<n ; i++){
            board[i] = s ; 
        }
        f(0 , board , ans , n) ; 
        return ans ; 
    }
};