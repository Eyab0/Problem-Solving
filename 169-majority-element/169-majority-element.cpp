class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mx=0;
        int m = nums.size()/2;
        map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans;
        for(auto i : mp){
            if(i.second>m){
                ans = i.first;
            }
        }
        return ans;
    }
};