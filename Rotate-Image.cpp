class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size() ; 
\tfor(int i = 0 ; i<n-1; i++){
\t\tfor(int j = i+1 ; j<n ; j++){
\t\t\tswap(mat[i][j] , mat[j][i]) ; 
\t\t}
\t}
\tfor(int i = 0; i<n ; i++){
\t\treverse(mat[i].begin() , mat[i].end()) ; 
\t}
    }
};