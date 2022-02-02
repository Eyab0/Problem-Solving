class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]!=0){
               
                 v.push_back(nums[i]);
            }
            
        }
         for(int i=0;i<v.size();i++){
             
             nums[i]=v[i];
             
         }
        for(int i=v.size();i<nums.size();i++){
            nums[i]=0;
        }

    }
};