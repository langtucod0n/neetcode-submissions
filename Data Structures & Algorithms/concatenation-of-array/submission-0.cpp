class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> rs = nums;
        for (int i = 0; i < nums.size(); i++) {
            rs.push_back(nums[i]);
        }
        return rs;
    }
};