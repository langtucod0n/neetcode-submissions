class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> rs;
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    rs.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(j < k && nums[j - 1] == nums[j]) j++;
                }
                while (nums[i] + nums[j] + nums[k] > 0 && j < k) {
                    k--;
                }
                while (nums[i] + nums[j] + nums[k] < 0 && j < k) {
                    j++;
                }
            }
        }
        return rs;
    }
};