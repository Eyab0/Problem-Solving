class Solution {
public:
    int heightChecker(vector<int>& h) {
        int res=0;
        vector<int> v;
        for(int i=0;i<h.size();i++){
            v.push_back(h[i]);
        }
        
        sort(h.begin(),h.end());
        
        
        for(int i=0;i<h.size();i++){
            if(h[i]!=v[i]) {
                res++;
            }
        }
        
        return res;
    }
};