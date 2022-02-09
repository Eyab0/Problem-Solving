class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
     
        int res=0;
            
            map<int ,int> m;
            for(int i:nums){
                m[i]++;
            }
            for(auto i:m){
                
                if(k==0){
                   if(i.second >1){
                    res++;
                } 
                }else{
                    if(m.count(i.first+k)){
                        res++;
                    }
                }  
                
            }
             
             
             
             
             
        
        return res;
    }
};