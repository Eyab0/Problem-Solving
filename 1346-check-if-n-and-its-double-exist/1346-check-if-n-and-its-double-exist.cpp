class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j && ((nums[i]==2*nums[j])||nums[j]==2*nums[i])){
                    return true;
                }
            }
        }
        
        return false;
        
        
        
        
        
    }
};