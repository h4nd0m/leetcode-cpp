class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        for (int i : nums) {
            hash[i]+=1;
        }
        vector<pair<int, int>> res;
        for (auto p : hash) {
            res.push_back({p.second, p.first});
        }
        sort(res.rbegin(), res.rend());
        vector<int> ans;
        for (int i = 0; i<k; ++i) {
            ans.push_back(res[i].second);
        }
        return ans;
    }
};
