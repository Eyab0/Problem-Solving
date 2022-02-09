class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[j] != nums[i]){
                nums[++j]=nums[i];
            }
        }
        return nums.size()>0?j+1:0;
        
        
        
        
        
        
        
        
        
        
        
//        set<int>s;
//         for(int i=0;i<nums.size();i++){
//             s.insert(nums[i]);
//         }
//         set<int> :: iterator it;
//         int j=0;
//         for(it = s.begin() ; it != s.end() ; it++,j++)
//             {
//             nums[j] = *it;
//             }
//         return s.size();
        
    }
};