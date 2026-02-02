class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for (int i = s.length()-1; i>=0; --i) {
            if (s[i]==' ') {
                if  (count !=0) {
                    return count;
                }
            } else {
                count +=1;
            }
        }
        return count;
    }
};
