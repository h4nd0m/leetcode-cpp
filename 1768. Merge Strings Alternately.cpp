class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        size_t a=word1.size();
        size_t b=word2.size();
        int i = 0, j = 0;
        string str = "";

        while (i < a || j < b) {
            if (i < a) {
                str.push_back(word1[i++]);
            }
            if (j < b) {
                str.push_back(word2[j++]);
            }
        }
        return str;
    }
};