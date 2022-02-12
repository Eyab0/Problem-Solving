class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& cnd, int ext) {
        
        vector<bool> v;
        int mx = *max_element(cnd.begin(), cnd.end());
        for(int i=0;i<cnd.size();i++){
            if(mx<=(cnd[i]+ext)){
                v.push_back(true);
            }else{
                v.push_back(false);

            }
        }
        
        
        
        return v;
        
        
        
        
        
    }
};