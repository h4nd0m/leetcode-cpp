class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        vector<vector<string>> res;
        for (string s : strs) {
            string sorts = s;
            sort(sorts.begin(), sorts.end());
            hash[sorts].push_back(s);
        }
        for (auto& p : hash) {
            res.push_back(p.second);
        }
        return res;
    }
};
