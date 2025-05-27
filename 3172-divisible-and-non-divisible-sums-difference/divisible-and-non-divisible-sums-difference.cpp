class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int>d ;
        vector<int>nd ; 
        for(int i = 1 ; i<=n ; i++){
            if(i%m==0){
                d.push_back(i) ; 
            }else if (i%m!=0){
              nd.push_back(i) ; 
            }
        }
        int snd = nd.size() ; 
        int sd = d.size() ; 
        int nds = 0 ; 
        int ds  = 0 ; 
       for(int i = 0 ;i<snd ; i++){
          nds+=nd[i] ; 
       }
       for(int i = 0 ;i<sd ; i++){
           ds+=d[i] ; 
       }
        return nds-ds ; 
    }
};