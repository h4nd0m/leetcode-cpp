class Solution {
public:
    int maxArea(vector<int>& height) {
        int mV = 0, l=0, r = height.size()-1;
        while (l<r) {
            mV=max(mV, min(height[l], height[r])*(r-l));
            if (height[l]<height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return mV;
    }
};
