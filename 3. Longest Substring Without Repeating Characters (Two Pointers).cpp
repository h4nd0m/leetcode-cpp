class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=1, mx=1;
        unordered_map<char, int> hash;
        if (s.size()==0) {
            return 0;
        } else if (s.size()==1) {
            return 1;
        }
        hash[s[l]]++;
        while (r<s.length()) {
            hash[s[r]]++;
            while (hash[s[r]]>1) {
                hash[s[l]]--;
                l++;
            }
            mx=max(mx, r-l+1);
            ++r;
        }
        return mx;
    }
};
