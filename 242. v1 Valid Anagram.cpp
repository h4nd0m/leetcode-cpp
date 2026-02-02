class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hs;
        unordered_map<char, int> ht;
        if (s.size() == t.size()) {
            size_t x= s.size();
            for (size_t i =0; i<x; ++i) {
                if (hs.find(s[i])==hs.end()) {
                    hs[s[i]]=1;
                } else {
                    hs[s[i]] +=1;
                }
                if (ht.find(t[i])==ht.end()) {
                    ht[t[i]]=1;
                } else {
                    ht[t[i]] +=1;
                }
            }
            return hs==ht;
        }
        return false;
    }
};
