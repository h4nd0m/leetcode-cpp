class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long prod=1;
        vector<int> nulls;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                nulls.push_back(i);
            } else {
                prod *= nums[i];
            }
        }
        vector<int> res(nums.size(), 0);
        if (nulls.size()>1) {
            return res;
        } else if (nulls.size()==1) {
            res[nulls[0]]=prod;
            return res;
        } else {
            for (int i = 0; i<nums.size(); ++i) {
                res[i]=prod/nums[i];
            }
            return res;
        }
    }
};
