class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       
        vector<int> v;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            cnt=0;
            for(int j=0;j<nums.size();j++){
                if(j!=i && nums[j] < nums[i]){
                    cnt++;
                }
                
                
            }
            v.push_back(cnt);
        }
        
        
        
        
        
        return v;
        
        
    }
};