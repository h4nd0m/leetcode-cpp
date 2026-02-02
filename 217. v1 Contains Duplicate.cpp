class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash(nums.begin(), nums.end());
        return nums.size()!=hash.size();
    }
};