class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int l=0;
        int r=0;
        int index=-1;
        
        for(int i=0;i<nums.size();i++){
            
            l=0;
            r=0;
            
          
            for(int j=0;j<i;j++){
                l+=nums[j];
            }
            for(int k=i+1;k<nums.size();k++){
                r+=nums[k];
            }
            
            if(l==r){
                return i;
            }
            
        }
        
        return index;
    }
};