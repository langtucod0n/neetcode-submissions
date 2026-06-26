class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int rs = 0;
        while (i < j) {
            int temp = (j - i) * min(height[i], height[j]);
            rs = max(rs, temp); 
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return rs;
    }
};