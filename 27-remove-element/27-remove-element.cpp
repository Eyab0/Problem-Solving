class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        
        int j=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]!=val){
                swap(nums[i],nums[j++]);
            }
            
            
            
            
        }
        
        return j;
        
        
        
        
        
        
        
        
        
        
        
        //another sol.
        
//         int k=nums.size();
//         for(int i=0;i<k;i++){
            
//             if(nums[i]==val){
//                 for(int j=i+1;j<nums.size();j++){
//                     nums[j-1] = nums[j];
//                 }
//                 i--;
//                 k--;
//             }
            
            
            
            
//         }
        
        
//         return k;
        
        
        
        
        
    }
};