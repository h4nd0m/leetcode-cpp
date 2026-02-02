class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int> res;
        res=nums;
        sort(res.begin(), res.end());
        return res[(res.size())/2];
    }
};
