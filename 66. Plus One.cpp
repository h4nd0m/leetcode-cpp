class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        deque<int> res(digits.begin(), digits.end());
        res[res.size()-1]+=1;

        for (int i = res.size()-1; i>=0; --i) {
            if (res[i] == 10) {
                res[i]=0;
                if (i==0) {
                    res.push_front(1);
                } else {
                    res[i-1]+=1;
                }
            } else {
                break;
            }
        }
        vector<int> ans(res.begin(), res.end());
        return ans;
    }
};
