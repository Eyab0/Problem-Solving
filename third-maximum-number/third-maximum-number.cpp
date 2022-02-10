class Solution {
public:
    int thirdMax(vector<int>& nums) {
   
        int res;
        sort(nums.begin(), nums.end(), greater<int>());
        vector<int>::iterator ip;
        ip = std::unique(nums.begin(), nums.end() );
        nums.resize(std::distance(nums.begin(), ip));
        
        if(nums.size()>=3){
            res = nums[2];
        }else{
            res = nums[0];
        }
        return res;
    }
};