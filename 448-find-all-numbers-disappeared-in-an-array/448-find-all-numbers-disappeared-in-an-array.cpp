class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        map<int, bool> mp;
        for(int i=1;i<=nums.size();i++){
            mp[i] = false;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = true;
        }
         for(auto i : mp){
            if(!i.second){
                v.push_back(i.first);
            }
        }
        return v;
    }
};