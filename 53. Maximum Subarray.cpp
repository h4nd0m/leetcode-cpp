class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int dp = 0;
        int res = nums[0];
        for (int& i : nums) {
            dp=max(dp+i, i);
            res = max(dp, res);
        }
        return res;
    }
};
