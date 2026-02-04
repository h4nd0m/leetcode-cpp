class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int l=0, mx=0, res=0;
        if (s.size()==1) {
            return 1;
        }
        count[s[l]]++;
        for (int r=1; r<s.length(); ++r) {
            count[s[r]]++;
            mx=max(mx, count[s[r]]);

            while (r-l+1 - mx > k) {
                count[s[l]]--;
                l++;
            }
            res=max(res, r-l+1);
        }
        return res;
    }
};
