class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int rs = nums[0];
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                rs = nums[i];
            }
            
            if (nums[i] == rs) {
                count++;
            } else {
                count--;
            }
        }
        return rs;
    }
};