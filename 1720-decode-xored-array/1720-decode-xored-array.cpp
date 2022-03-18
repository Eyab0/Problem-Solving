class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> v;
        
        int temp=first;
        v.push_back(first);
        
        for(int i=0;i<encoded.size();i++){
            
            temp=temp^encoded[i];
            
            v.push_back(temp);
        }
        
        
        return v;
        
        
    }
};