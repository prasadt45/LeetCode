class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bot) {
        int res = INT_MAX;

        int face[7] = {};
        for(int i = 0; i < tops.size(); i++) {
            face[tops[i]]++;
            if(bot[i] != tops[i]) face[bot[i]]++;
        }

        
        for(int x = 1; x <= 6; x++) {
            if(face[x] < tops.size()) continue;   

            int mt = 0, mb = 0;
            bool pos = true;

         
            for(int i = 0; i < tops.size(); i++) {
                if (tops[i] != x && bot[i] != x) {
                    pos = false; 
                    break;
                }
                if (tops[i] != x)      mt++;
                if (bot[i] != x)   mb++;
            }

            if (pos) 
                res = min(res, min(mt, mb));
        }

        return res == INT_MAX ? -1 : res;
    }
};