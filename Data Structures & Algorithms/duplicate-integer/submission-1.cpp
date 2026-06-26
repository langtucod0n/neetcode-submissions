class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (mp.count(x)) return true;
            mp[x] += 1;
        }
        return false;
    }
};