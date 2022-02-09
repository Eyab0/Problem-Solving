class Solution {
public:
    bool validMountainArray(vector<int>& nums) {
        bool res=false;
        if(nums.size()>=3 && (nums[0]<nums[1])){
            for(int i=2;i<nums.size();i++){
                if(nums[i]==nums[i-1]) return false;
                if(!res){
                    if(nums[i]<nums[i-1]){
                        res=true;
                    }
                }else{
                    if(nums[i]>nums[i-1]){
                        return false;
                    }
                }
            }
        }
        return res;
        
    }
};