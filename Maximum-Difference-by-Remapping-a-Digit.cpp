class Solution {
    private:
    int getm(string num){
        int mnum = stoi(num) ; 
        for(int i = '0' ; i<='9' ; i++){
            if(i=='9') continue ; 
            string temp = num ; 
            for(auto &s : temp){
                if(s==i){
                   s = '9' ; 
                }
            } 
            mnum = max(mnum , stoi(temp)) ; 
        }
        return mnum ; 
    }
      int getmi(string num){
        int mnum = stoi(num) ; 
        for(int i = '0' ; i<='9' ; i++){
            if(i=='0') continue ; 
            string temp = num ; 
            for(auto& s : temp){
                if(s==i){
                   s = '0' ; 
                }
            } 
            mnum = min(mnum , stoi(temp)) ; 
        }
        return mnum ; 
    }
public:
    int minMaxDifference(int num) {
        string maxn = to_string(num) ; 
        int mn= getm(maxn) ; 
        int minn = getmi(maxn) ; 
        return mn - minn ; 
        

    }
};