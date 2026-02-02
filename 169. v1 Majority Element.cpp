class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<long long, int> hash;
        for (long long i : nums) {
            hash[i]+=1;
        }
        int mx = 0;
        long long res;
        for (auto& p : hash) {
            if (p.second > mx) {
                res = p.first;
                mx = p.second;
            }
        }
        return res;
    }
};
