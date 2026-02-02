class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()) {
            return false;
        }
        vector<int> c(26, 0);
        for (int i = 0; i<s.length(); ++i) {
            c[s[i]-'a']+=1;
            c[t[i]-'a']-=1;
        }
        for (int v: c) {
            if (v!=0) {
                return false;
            }
        }
        return true;
    }
};
