class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        hash.max_load_factor(0.7);
        hash.reserve(nums.size());
        for (int i : nums) {
            auto res = hash.emplace(i);
            if (!res.second) return true;
        }
        return false;
    }
};