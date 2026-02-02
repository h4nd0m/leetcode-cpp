class Solution {
public:
    string JoinStr(const string& str, int k) {
        string ans = "";
        for (int i = 0; i<k; ++i) {
            ans+=str;
        }
        return ans;
    }

    bool Valid(const string& str1, const string& str2, int k) {
        if (str1.size() % k > 0 || str2.size() % k > 0) {
            return false;
        } else {
            int k1 = str1.size() / k;
            int k2 = str2.size() / k;
            string div = str1.substr(0, k); 
            return str1 == JoinStr(div, k1) && str2 == JoinStr(div, k2);
        }
    }
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.length(), len2 = str2.length();
        for (int i = min(len1, len2); i >= 1; --i) {
            if (Valid(str1, str2, i)) {
                return str1.substr(0, i);
            }
        }
        return "";
    }
};
